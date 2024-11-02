#include "stack.h"
#include <iostream>
using namespace std;

void testStack(stack &S, const string &data) {
    // Memasukkan data ke stack
    for (char c : data) {
        push(S, c);
    }

    // Menampilkan isi stack awal
    cout << "Isi stack awal: ";
    printInfo(S);

    // Mengeluarkan beberapa elemen dari stack
    for (size_t i = 0; i < data.size() / 2; i++) {
        pop(S);
    }

    // Menampilkan isi stack setelah beberapa elemen di-pop
    cout << "Isi stack setelah pop: ";
    printInfo(S);
}

int main() {
    stack S;
    createStack(S);

    int nim_last_digit;
    cout << "Masukkan digit terakhir NIM: ";
    cin >> nim_last_digit;

    switch (nim_last_digit % 4) {
        case 0:
            cout << "Output:\nI F L A B J A Y A J A Y A\n";
            testStack(S, "IFLABJAYA");
            break;

        case 1:
            cout << "Output:\nH A L O B A N D U N G B A N D U N G\n";
            testStack(S, "HALOBANDUNG");
            break;

        case 2:
            cout << "Output:\nP E R C A Y A D I R I D I R I\n";
            testStack(S, "PERCAYADIRI");
            break;

        case 3:
            cout << "Output:\nS T R U K T U R D A T A D A T A\n";
            testStack(S, "STRUKTURDATA");
            break;

        default:
            cout << "Digit terakhir NIM tidak valid.\n";
            break;
    }

    return 0;
}
