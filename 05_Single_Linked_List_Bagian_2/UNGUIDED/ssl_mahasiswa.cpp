#include <iostream>
#include <string>

struct Mahasiswa {
    int NIM;
    std::string Nama;
    Mahasiswa* next;
};

class SingleLinkedList {
private:
    Mahasiswa* head;

public:
    SingleLinkedList() : head(nullptr) {}

    void tambahMahasiswa(int nim, const std::string& nama) {
        Mahasiswa* newMahasiswa = new Mahasiswa{nim, nama, nullptr};
        if (!head) {
            head = newMahasiswa;
        } else {
            Mahasiswa* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newMahasiswa;
        }
    }

    void cariMahasiswa(int nim) {
        Mahasiswa* temp = head;
        while (temp) {
            if (temp->NIM == nim) {
                std::cout << "Mahasiswa ditemukan: " << temp->Nama << std::endl;
                return;
            }
            temp = temp->next;
        }
        std::cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan" << std::endl;
    }

    ~SingleLinkedList() {
        while (head) {
            Mahasiswa* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    SingleLinkedList list;
    list.tambahMahasiswa(2311104026, "Satria Ramadhan");
    list.tambahMahasiswa(2311104015, "Ahmad Uffi");

    list.cariMahasiswa(2311104026);
    list.cariMahasiswa(2311004402); 

    return 0;
}