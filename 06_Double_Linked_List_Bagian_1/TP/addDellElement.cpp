#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insertFirst(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        newNode->prev = nullptr;

        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode;
        }

        head = newNode;
    }

    void insertLast(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        newNode->prev = tail;

        if (tail != nullptr) {
            tail->next = newNode;
        } else {
            head = newNode;
        }

        tail = newNode;
    }

    void display() {
        Node* current = head;
        cout << "DAFTAR ANGGOTA LIST: ";
        while (current != nullptr) {
            cout << current->data;
            if (current->next != nullptr) {
                cout << " <-> ";
            }
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    int value;

    cout << "Masukkan elemen pertama = ";
    cin >> value;
    dll.insertLast(value);
    dll.display();

    cout << "Masukkan elemen kedua di awal = ";
    cin >> value;
    dll.insertFirst(value);
    dll.display();

    cout << "Masukkan elemen ketiga di akhir = ";
    cin >> value;
    dll.insertLast(value);
    dll.display();

    return 0;
}