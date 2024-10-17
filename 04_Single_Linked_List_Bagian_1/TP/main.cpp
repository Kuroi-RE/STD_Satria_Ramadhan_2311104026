#include "list.h"

int main() {
    List L;
    createList(L);

    infotype nim_digit;
    address P;

    // Input 10 digit NIM menggunakan looping
    for (int i = 1; i <= 10; i++) {
        cout << "Masukkan digit NIM ke-" << i << ": ";
        cin >> nim_digit;
        P = allocate(nim_digit);
        insertLast(L, P);  // Memasukkan digit NIM menggunakan insertLast
    }

    // Menampilkan isi list NIM tanpa urutan terbalik
    cout << "Isi List: ";
    printInfo(L);

    return 0;
}
