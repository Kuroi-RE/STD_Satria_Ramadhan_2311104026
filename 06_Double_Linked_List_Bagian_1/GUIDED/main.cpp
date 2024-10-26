#include <iostream>
#include "doublelist.h"

void CreateList(List &L) {
    L.First = nullptr;
    L.Last = nullptr;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = nullptr;
    P->prev = nullptr;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = nullptr;
}

void printInfo(const List &L) {
    address P = L.First;
    while (P != nullptr) {
        std::cout << "Nomor Polisi: " << P->info.nopol << std::endl;
        std::cout << "Warna Kendaraan: " << P->info.warna << std::endl;
        std::cout << "Tahun Buat: " << P->info.thnBuat << std::endl;
        P = P->next;
    }
}

void insertLast(List &L, address P) {
    if (L.First == nullptr) {
        L.First = P;
        L.Last = P;
    } else {
        L.Last->next = P;
        P->prev = L.Last;
        L.Last = P;
    }
}

address searchByNopol(const List &L, const std::string &nopol) {
    address P = L.First;
    while (P != nullptr) {
        if (P->info.nopol == nopol) {
            return P;
        }
        P = P->next;
    }
    return nullptr;
}

void deleteByNopol(List &L, const std::string &nopol) {
    address P = searchByNopol(L, nopol);
    if (P != nullptr) {
        if (P->prev != nullptr) {
            P->prev->next = P->next;
        } else {
            L.First = P->next;
        }
        if (P->next != nullptr) {
            P->next->prev = P->prev;
        } else {
            L.Last = P->prev;
        }
        dealokasi(P);
        std::cout << "Data berhasil dihapus." << std::endl;
    } else {
        std::cout << "Data tidak ditemukan." << std::endl;
    }
}

void addData(List &L) {
    int n;
    std::cout << "Berapa data yang ingin dimasukan? ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        infotype data;
        std::cout << "Masukan nomor polisi: ";
        std::cin >> data.nopol;
        std::cout << "Masukan warna kendaraan: ";
        std::cin >> data.warna;
        std::cout << "Masukan tahun kendaraan: ";
        std::cin >> data.thnBuat;

        address P = alokasi(data);
        insertLast(L, P);
    }
}

void searchData(const List &L) {
    std::string nopol;
    std::cout << "Masukan nomor polisi yang dicari: ";
    std::cin >> nopol;

    address P = searchByNopol(L, nopol);
    if (P != nullptr) {
        std::cout << "Data ditemukan:" << std::endl;
        std::cout << "Nomor Polisi: " << P->info.nopol << std::endl;
        std::cout << "Warna Kendaraan: " << P->info.warna << std::endl;
        std::cout << "Tahun Buat: " << P->info.thnBuat << std::endl;
    } else {
        std::cout << "Data tidak ditemukan." << std::endl;
    }
}

void deleteData(List &L) {
    std::string nopol;
    std::cout << "Masukan nomor polisi yang ingin dihapus: ";
    std::cin >> nopol;
    deleteByNopol(L, nopol);
}

int main() {
    List L;
    CreateList(L);

    int choice;
    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Menambah data" << std::endl;
        std::cout << "2. Mencari data" << std::endl;
        std::cout << "3. Menghapus data" << std::endl;
        std::cout << "4. Keluar" << std::endl;
        std::cout << "Pilih menu: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addData(L);
                break;
            case 2:
                searchData(L);
                break;
            case 3:
                deleteData(L);
                break;
            case 4:
                std::cout << "Keluar dari program." << std::endl;
                break;
            default:
                std::cout << "Pilihan tidak valid." << std::endl;
        }
    } while (choice != 4);

    return 0;
}