#include "stack.h"
#include <iostream>
using namespace std;

// Membuat stack baru dengan Top diinisialisasi 0
void createStack(stack &S) {
    S.Top = 0;
}

// Mengecek apakah stack kosong
bool isEmpty(stack S) {
    return S.Top == 0;
}

// Mengecek apakah stack penuh
bool isFull(stack S) {
    return S.Top == 15;
}

// Menambahkan elemen ke atas stack
void push(stack &S, infotype x) {
    if (!isFull(S)) {
        S.Top++;
        S.info[S.Top - 1] = x;
    } else {
        cout << "Stack penuh!\n";
    }
}

// Menghapus elemen dari atas stack
int pop(stack &S) {
    if (!isEmpty(S)) {
        infotype x = S.info[S.Top - 1];
        S.Top--;
        return x;
    } else {
        cout << "Stack kosong!\n";
        return -1;
    }
}

// Menampilkan semua elemen dalam stack dari atas ke bawah
void printInfo(stack S) {
    if (isEmpty(S)) {
        cout << "Stack kosong\n";
    } else {
        for (int i = S.Top - 1; i >= 0; i--) {
            cout << S.info[i] << " ";
        }
        cout << endl;
    }
}
