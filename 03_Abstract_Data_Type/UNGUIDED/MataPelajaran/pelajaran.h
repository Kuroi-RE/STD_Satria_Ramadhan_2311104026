#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <string>
using namespace std;

struct Pelajaran {
    string namaMapel;
    string kodeMapel;
};

Pelajaran create_pelajaran(const string& namaMapel, const string& kodeMapel);

void tampil_pelajaran(const Pelajaran& pel);

#endif
