#include <iostream>
using namespace std;

struct Node {
    int data;   // Menyimpan data
    Node* next; // Menyimpan alamat dari node selanjutnya
};

Node* alokasi(int value) {
    Node* newNode = new Node;
    if (newNode != nullptr) {
        newNode->data = value;
        newNode->next = nullptr;
    }
    return newNode;
}

void dealokasi(Node* node) {
    delete node;
}

bool isListEmpty(Node* head) {
    return head == nullptr;
}

void insertDepan(Node* &head, int value) {
    Node* newNode = alokasi(value);
    if (newNode != nullptr) {
        newNode->next = head;
        head = newNode;
    }
}

void insertBelakang(Node* &head, int value) {
    Node* newNode = alokasi(value);
    if (newNode != nullptr) {
        if (isListEmpty(head)) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
}

void hapusNode(Node* &head, int value) {
    if (isListEmpty(head)) {
        cout << "List kosong, tidak ada yang bisa dihapus!" << endl;
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;

    // Jika node yang akan dihapus adalah head
    if (temp != nullptr && temp->data == value) {
        head = temp->next;
        dealokasi(temp);
        return;
    }

    // Mencari node yang akan dihapus
    while (temp != nullptr && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    // Jika nilai tidak ditemukan dalam list
    if (temp == nullptr) {
        cout << "Nilai " << value << " tidak ditemukan dalam list!" << endl;
        return;
    }

    // Node ditemukan, hapus node
    prev->next = temp->next;
    dealokasi(temp);
}

void printList(Node* head) {
    if (isListEmpty(head)) {
        cout << "List kosong!" << endl;
    } else {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main() {
    Node* head = nullptr;

    // insertDepan(head, 5);
    // insertBelakang(head, 10);
    // insertBelakang(head, 20);

    // printList(head);

    cout << "Hapus node 10" << endl;

    insertDepan(head, 5);
    insertBelakang(head, 10);
    hapusNode(head, 10);
    insertBelakang(head, 20);

    printList(head);

    return 0;
}
