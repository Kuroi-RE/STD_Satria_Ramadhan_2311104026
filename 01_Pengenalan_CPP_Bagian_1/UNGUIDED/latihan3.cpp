#include <iostream>
using namespace std;

// TODO
// Buatlah sebuah program yang dapat mencetak pola berikut:
// 321 * 123
// 21 * 12
// 1 * 1
// *


// ! Buat sebuah fungsi yang menerima parameter angka dan mencetak pola tersebut
void cetakPola(int angka) {
    for (int i = angka; i > 0; i--) {
        
        for (int j = i; j > 0; j--) {
            cout << j << " ";
        }
        cout << "* ";
        
        for (int j = 1; j <= i; j++) {
            cout << j << "";
        }
        cout << endl;
    }
    cout << "*" ;
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    cetakPola(angka);
    return 0;
}