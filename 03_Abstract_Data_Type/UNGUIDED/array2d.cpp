#include <iostream>

using namespace std;

void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarIsiArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarPointer(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int array2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    int a = 10, b = 20;
    int* ptr1 = &a;
    int* ptr2 = &b;

    // Tampilkan isi awal dari array1 dan array2
    cout << "Isi array1 sebelum ditukar:" << endl;
    tampilkanArray(array1);
    cout << "Isi array2 sebelum ditukar:" << endl;
    tampilkanArray(array2);

    // Tukar isi dari array1 dan array2 pada posisi tertentu (misalnya baris 1 kolom 1)
    tukarIsiArray(array1, array2, 1, 1);

    // Tampilkan isi array setelah penukaran
    cout << "Isi array1 setelah ditukar di posisi [1][1]:" << endl;
    tampilkanArray(array1);
    cout << "Isi array2 setelah ditukar di posisi [1][1]:" << endl;
    tampilkanArray(array2);

    // Tampilkan nilai sebelum penukaran pointer
    cout << "Nilai a sebelum tukar pointer: " << *ptr1 << endl;
    cout << "Nilai b sebelum tukar pointer: " << *ptr2 << endl;

    // Tukar nilai yang ditunjuk oleh pointer
    tukarPointer(ptr1, ptr2);

    // Tampilkan nilai setelah penukaran pointer
    cout << "Nilai a setelah tukar pointer: " << *ptr1 << endl;
    cout << "Nilai b setelah tukar pointer: " << *ptr2 << endl;

    return 0;
}
