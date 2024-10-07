#include <iostream>
#include <string>

using namespace std;

// Structure dari data Mahasiswa
struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

// Fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main() {
    const int maxMahasiswa = 10;
    Mahasiswa dataMahasiswa[maxMahasiswa];
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa (maksimal 10): ";
    cin >> jumlahMahasiswa;

    if (jumlahMahasiswa > maxMahasiswa) {
        cout << "Jumlah mahasiswa melebihi batas maksimal!" << endl;
        return 1;
    }

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Masukkan data mahasiswa ke-" << (i + 1) << ":" << endl;
        
        cout << "Nama: ";
        cin.ignore();
        getline(cin, dataMahasiswa[i].nama);
        
        cout << "NIM: ";
        getline(cin, dataMahasiswa[i].nim);

        cout << "UTS: ";
        cin >> dataMahasiswa[i].uts;

        cout << "UAS: ";
        cin >> dataMahasiswa[i].uas;

        cout << "Tugas: ";
        cin >> dataMahasiswa[i].tugas;

        // Hitung nilai akhir menggunakan fungsi
        dataMahasiswa[i].nilaiAkhir = hitungNilaiAkhir(dataMahasiswa[i].uts, dataMahasiswa[i].uas, dataMahasiswa[i].tugas);
    }

    // Menampilkan data mahasiswa beserta nilai akhir
    cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Mahasiswa ke-" << (i + 1) << ":\n";
        cout << "Nama        : " << dataMahasiswa[i].nama << endl;
        cout << "NIM         : " << dataMahasiswa[i].nim << endl;
        cout << "UTS         : " << dataMahasiswa[i].uts << endl;
        cout << "UAS         : " << dataMahasiswa[i].uas << endl;
        cout << "Tugas       : " << dataMahasiswa[i].tugas << endl;
        cout << "Nilai Akhir : " << dataMahasiswa[i].nilaiAkhir << endl;
        cout << "--------------------------\n";
    }

    return 0;
}
