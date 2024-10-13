// pelajaran.cpp
#include "pelajaran.h"
#include <iostream>
using namespace std;

Pelajaran create_pelajaran(const string& namaMapel, const string& kodeMapel) {
    Pelajaran pel;
    pel.namaMapel = namaMapel;
    pel.kodeMapel = kodeMapel;
    return pel;
}

void tampil_pelajaran(const Pelajaran& pel) {
    cout << "Nama Pelajaran : " << pel.namaMapel << endl;
    cout << "Kode Pelajaran : " << pel.kodeMapel << endl;
}
