#include <iostream>
using namespace std;

int main(){
    int tingkat, baris, kolom;

    // Meminta input dari pengguna untuk menentukan ukuran array 3D
    cout << "Masukkan jumlah Tingkat: ";
    cin >> tingkat;
    cout << "Masukkan jumlah Baris: ";
    cin >> baris;
    cout << "Masukkan jumlah Kolom: ";
    cin >> kolom;
    cout << endl;

    // Membuat array 3D untuk menyimpan data
    int nilai[tingkat][baris][kolom];

    // Memasukkan elemen-elemen ke dalam array 3D
    for (int t = 0; t < tingkat; t++){
        cout << "Masukkan elemen pada Tingkat ke-" << t+1 << endl;
        for (int b = 0; b < baris; b++){    
            for (int k = 0; k < kolom; k++){
                cout << "Masukkan nilai pada Tingkat " << t+1 << ", Baris " << b+1 << ", Kolom " << k+1 << ": ";
                cin >> nilai[t][b][k];
            }
        }
        cout << endl;
    }

    // Menampilkan elemen-elemen array 3D yang telah dimasukkan
    for (int t = 0; t < tingkat; t++){
        cout << "Nilai pada Tingkat ke-" << t+1 << ":" << endl;
        for (int b = 0; b < baris; b++){
            for (int k = 0; k < kolom; k++){
                cout << nilai[t][b][k] << " ";
            }
            cout << endl;  // Pindah baris setelah setiap baris di tingkat tersebut
        }
        cout << endl;  // Pindah baris setelah setiap tingkat
    }

    return 0;
}
