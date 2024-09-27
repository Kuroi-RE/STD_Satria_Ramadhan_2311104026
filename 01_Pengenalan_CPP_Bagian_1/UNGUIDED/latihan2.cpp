#include <iostream>
#include <string>

using namespace std;

// TODO
// ? Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan.
// ?  Angka yang akan di- input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100

// ! Buat Fungsi yang menerima parameter angka.
string angkaKeKata(int angka) {
    // ! Inisiasi Urutan Angka
    string diBawah_20[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh", 
                           "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};
    string seratus = "seratus";

    // ! Validasi Angka
    if (angka < 20) {
        return diBawah_20[angka];
    } else if (angka < 100) {
        return puluhan[angka / 10] + (angka % 10 != 0 ? " " + diBawah_20[angka % 10] : "");
    } else if (angka == 100) {
        return seratus;
    }
    return "";
}

int main() {
    // ! inisiasi variable angka dengan tipe integer
    int angka;
    cout << "Masukkan angka antara 0 dan 100: ";
    cin >> angka;

    // ! Validasi: inputan angka harus diantara 0 dan 100
    if (angka < 0 || angka > 100) {
        cout << "Angka di luar jangkauan!" << endl;
    } else {
        cout << "Angka dalam kata-kata adalah: " << angkaKeKata(angka) << endl;
    }

    return 0;
}
