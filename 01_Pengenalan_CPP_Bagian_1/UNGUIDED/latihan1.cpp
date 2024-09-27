#include <iostream>
using namespace std;

int main() {
// TODO
// ! Program menerima 2 inputan dari user yang bertipe float.
// ? kemudian program akan menampilkan hasil dari penjumlahan, pengurangan, perkalian, dan pembagian dari kedua bilangan tersebut.


// Inisiasi variable yang diperlukan (bil1, bil2) yang bertipe float
float bil1, bil2;

cout << "Masukkan bilangan pertama: ";
cin >> bil1;
cout << "Masukan Bilangan Kedua: ";
cin >> bil2;

// Menampilkan hasil penjumlahan, pengurangan, perkalian, dan pembagian dari kedua bilangan
cout << "Hasil Penjumlahan: " << bil1 + bil2 << endl;
cout << "Hasil Pengurangan: " << bil1 - bil2 << endl;
cout << "Hasil Perkalian: " << bil1 * bil2 << endl;
cout << "Hasil Pembagian: " << bil1 / bil2 << endl;

}
