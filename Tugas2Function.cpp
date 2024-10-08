#include <iostream>
using namespace std;

void tampilkanMenu() {
    string makanan[]      = {"Sate Ayam", "Ayam Goreng", "Ayam Geprek", "Ayam Betutu"};
    double hargaMakanan[] = {25000.0, 15000.0, 10000.0, 30000.0};
    
    string minuman[]      = {"Teh Manis", "Kopi Susu", "Es Jeruk"};
    double hargaMinuman[] = {5000.0, 5000.0, 7000.0};
    
    cout << "----------Kantin Hokage----------" << endl;
    cout << "Daftar Menu Makanan:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << (i + 1) << ". " << makanan[i] << " : Rp " << hargaMakanan[i] << endl;
    }
    
    cout << "\nDaftar Menu Minuman:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << (i + 5) << ". " << minuman[i] << " : Rp " << hargaMinuman[i] << endl;
    }
}

void hitungTotal(double &totalharga, double &diskon, int kodemenu, int jumlah) {
    double hargaMakanan[] = {25000.0, 15000.0, 10000.0, 30000.0};
    double hargaMinuman[] = {5000.0, 5000.0, 7000.0};

    if (kodemenu >= 1 && kodemenu <= 4) {
        totalharga = hargaMakanan[kodemenu - 1] * jumlah;
    } else {
totalharga = hargaMinuman [kodemenu - 5] * jumlah;
    }

diskon = totalharga * 0.05;
    totalharga -= diskon;
}

void tampilkanStruk (int kodemenu, int jumlah, double totalharga, double diskon, double bayar) {
    string makanan [] = {"Sate Ayam", "Ayam Goreng", "Ayam Geprek", "Ayam Betutu"};
    string minuman [] = {"Teh Manis", "Kopi Susu", "Es Jeruk"};
cout << endl;
cout << "----------Struk Pembayaran----------\n";
cout << "Kode menu : " << kodemenu << endl;
cout << "Jumlah barang : " << jumlah << endl;

if (kodemenu >= 1 && kodemenu <= 4) {
cout << "Menu          : " << makanan[kodemenu - 1] << endl;
}else{
cout << "Menu          : " << minuman[kodemenu - 5] << endl;
}

cout << "Total harga          : Rp. " << totalharga+ + diskon << endl;
cout << "Selamat anda mendapatkan potongan harga up to 5%!" << endl;
cout << "Diskon               : Rp. " << diskon << endl;
cout << "Harga setelah diskon : Rp. " << totalharga << endl;
cout << "Uang bayar           : Rp. " << bayar << endl;
cout << "Kembalian            : Rp. " << (bayar - totalharga) << endl;
cout << endl;
cout << "                       -Terima kasih-                      \n";
}

int main (){
    int kodemenu, jumlah;
    double totalharga = 0, bayar, diskon;
    char lagi;

    do {
    tampilkanMenu();
    
    cout << "\nSilahkan masukkan kode menu (1-7): ";
    cin >> kodemenu;
    
    if ((kodemenu >= 1 && kodemenu <= 4) || (kodemenu >= 5 && kodemenu <= 7)) {
        cout << "Masukkan jumlah menu: ";
        cin >> jumlah;

        
        hitungTotal(totalharga, diskon, kodemenu, jumlah);
        
        cout << "Total harga: Rp. " << totalharga + diskon << endl;
        
        cout << "Masukkan jumlah uang yang dibayarkan: Rp. ";
        cin >> bayar;
        
        tampilkanStruk(kodemenu, jumlah, totalharga, diskon, bayar);
        
    } else {
        cout << "Maaf, kode menu tidak ditemukan." << endl;
    }
        cout << "Anda ingin memesan lagi? [Y/N] : ";
        cin >> lagi;
  }while (lagi == 'Y' || lagi == 'y');
    return 0;
}
