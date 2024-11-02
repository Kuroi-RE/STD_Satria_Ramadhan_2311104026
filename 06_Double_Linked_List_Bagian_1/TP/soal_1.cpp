#include <iostream>
using namespace std;

// Struktur node untuk Doubly Linked List
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Fungsi untuk membuat node baru
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    return newNode;
}

// Fungsi untuk menambahkan elemen di awal list
void insertFirst(Node*& head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

// Fungsi untuk menambahkan elemen di akhir list
void insertLast(Node*& head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

// Fungsi untuk menampilkan elemen dari depan ke belakang
void displayList(Node* head) {
    Node* temp = head;
    cout << "DAFTAR ANGGOTA LIST: ";
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) cout << " <-> ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int data;

    // Masukkan elemen pertama
    cout << "Masukkan elemen pertama = ";
    cin >> data;
    insertLast(head, data);
    displayList(head);

    //  Masukkan elemen di awal
    cout << "Masukkan elemen kedua di awal = ";
    cin >> data;
    insertFirst(head, data);
    displayList(head);

    // Masukkan elemen di akhir
    cout << "Masukkan elemen ketiga di akhir = ";
    cin >> data;
    insertLast(head, data);
    displayList(head);

    return 0;
}
