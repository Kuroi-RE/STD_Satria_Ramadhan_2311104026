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

// Fungsi untuk menghapus elemen pertama
void deleteFirst(Node*& head) {
    if (head == nullptr) {
        cout << "List kosong, tidak ada elemen yang bisa dihapus.\n";
        return;
    }
    Node* temp = head;
    if (head->next == nullptr) {  // Jika hanya ada satu elemen
        head = nullptr;
    } else {
        head = head->next;
        head->prev = nullptr;
    }
    delete temp;
}

// Fungsi untuk menghapus elemen terakhir
void deleteLast(Node*& head) {
    if (head == nullptr) {
        cout << "List kosong, tidak ada elemen yang bisa dihapus.\n";
        return;
    }
    Node* temp = head;
    if (head->next == nullptr) {  // Jika hanya ada satu elemen
        head = nullptr;
    } else {
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->prev->next = nullptr;
    }
    delete temp;
}

// Fungsi untuk menampilkan elemen dari depan ke belakang
void displayList(Node* head) {
    Node* temp = head;
    cout << "DAFTAR ANGGOTA LIST: ";
    if (temp == nullptr) {
        cout << "List kosong";
    } else {
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) cout << " <-> ";
            temp = temp->next;
        }
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int data;

    // Contoh input pertama: Masukkan elemen pertama
    cout << "Masukkan elemen pertama = ";
    cin >> data;
    insertLast(head, data);
    displayList(head);

    // Contoh input kedua: Masukkan elemen di akhir
    cout << "Masukkan elemen kedua di akhir = ";
    cin >> data;
    insertLast(head, data);
    displayList(head);

    // Contoh input ketiga: Masukkan elemen di akhir
    cout << "Masukkan elemen ketiga di akhir = ";
    cin >> data;
    insertLast(head, data);
    displayList(head);

    // Hapus elemen pertama
    cout << "Menghapus elemen pertama...\n";
    deleteFirst(head);
    displayList(head);

    // Hapus elemen terakhir
    cout << "Menghapus elemen terakhir...\n";
    deleteLast(head);
    displayList(head);

    return 0;
}
