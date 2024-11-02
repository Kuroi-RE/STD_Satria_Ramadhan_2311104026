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
void displayForward(Node* head) {
    Node* temp = head;
    cout << "Daftar elemen dari depan ke belakang: ";
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) cout << " <-> ";
        temp = temp->next;
    }
    cout << endl;
}

// Fungsi untuk menampilkan elemen dari belakang ke depan
void displayBackward(Node* head) {
    if (head == nullptr) return;

    Node* temp = head;
    // Bergerak ke node terakhir
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    
    cout << "Daftar elemen dari belakang ke depan: ";
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->prev != nullptr) cout << " <-> ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int data;

    // Masukkan 4 elemen secara berurutan
    cout << "Masukkan 4 elemen secara berurutan:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Masukkan elemen ke-" << i + 1 << ": ";
        cin >> data;
        insertLast(head, data);
    }

    // Tampilkan elemen dari depan ke belakang
    displayForward(head);

    // Tampilkan elemen dari belakang ke depan
    displayBackward(head);

    return 0;
}
