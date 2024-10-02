#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    // Meminta ukuran array tiga dimensi dari pengguna
    cout << "Masukkan ukuran dimensi pertama (x): ";
    cin >> x;
    cout << "Masukkan ukuran dimensi kedua (y): ";
    cin >> y;
    cout << "Masukkan ukuran dimensi ketiga (z): ";
    cin >> z;

    // Membuat array 3D secara dinamis
    int array3D[x][y][z];

    // Meminta input elemen untuk array 3D
    cout << "Masukkan elemen array 3D:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Array[" << i << "][" << j << "][" << k << "]: ";
                cin >> array3D[i][j][k];
            }
        }
    }

    // Menampilkan elemen array 3D
    cout << "Elemen array 3D:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Array[" << i << "][" << j << "][" << k << "] = " << array3D[i][j][k] << endl;
            }
        }
    }

    return 0;
}
