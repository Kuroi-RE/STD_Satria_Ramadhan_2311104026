#include <iostream>
using namespace std;

int getPembelian() {
    double total_pembelian, dikasih;
    cout << "Total Pembelian: Rp. ";
    cin >> total_pembelian;
    diskon = 0;

    if(total_pembelian >= 100000)
        diskon = 0.05 * total_pembelian;
    else
        diskon = 0;
    cout << "Besar Diskon = Rp" << diskon;
}

