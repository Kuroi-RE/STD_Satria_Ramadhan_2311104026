#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
    // cout << "Saya lagi belajar c++ nih hehee" << endl;

    // int nilai;

    // cin >> nilai;
    // cout << "Nilai = " << nilai << endl;

//    int W, X, Y; float z;
//    X = 7; Y = 3; W = 1;
//    z = (X + Y) / (Y + W);
//    cout << "Hasil = " << z << endl;

//    double total_pembelian, diskon;
//    cout << "Total Pembelian: Rp. ";
//    cin >> total_pembelian;
//    diskon = 0;
//
//    if(total_pembelian >= 100000)
//        diskon = 0.05 * total_pembelian;
//    else
//        diskon = 0;
//    cout << "Besar Diskon = Rp" << diskon;
    int i = 0;
    int jum;
    cin >> jum;

    do {
        cout << "baris ke-" << i + 1 << endl;
        i++;
    } while (i<jum);
    getch();
    return 0;
}
