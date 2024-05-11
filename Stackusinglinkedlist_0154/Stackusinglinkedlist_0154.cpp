#include <iostream>
using namespace std;

// Kelas Node yang merepresentasikan satu node dalam linked list
class Node {
public:
    int data;
    Node* next;

    // Konstruktor untuk Node, menginisialisasi pointer next dengan NULL
    Node() {
        next = NULL;
    }
};

// Kelas stack
class Stack {
private:
    Node* top;      // Pointer ke node teratas dari stack

public:
    Stack() {
        top = NULL;    // Konstruktor untuk Stack, menginisialisasi top dengan NULL saat pembuatan stack baru
    }

    // Operasi push: Memasukkan elemen ke atas stack
    int push(int value) {
        Node* newNode = new Node(); // 1. Mengalokasikan memori untuk node baru
        newNode->data = value;      // 2. Mengisi nilai data pada node baru
        newNode->next = top;        // 3. Menetapkan pointer next dari node baru ke node top saat ini
        top = newNode;              // 4. Memperbarui pointer top menjadi node baru
        cout << "Push value :" << value << endl; // Mencetak nilai yang dipush ke stack
        return value;
    }

    // Operasi pop: Menghapus elemen teratas dari stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong." << endl;
        }

        cout << "Nilai yang di-pop :" << top->data << endl; // Mencetak nilai yang di-pop dari stack
        top = top->next;        // Memperbarui pointer top ke node selanjutnya
    }

    // Operasi peek/Top: Mengambil nilai elemen teratas tanpa menghapusnya
    void peek() {
        if (top == NULL) {
            cout << "Stack kosong." << endl;
        }
        else {
            Node* current = top;
            while (current != NULL) {
                cout << current->data << " " << endl; // Mencetak nilai dari setiap elemen dalam stack
                current = current->next;
            }
            cout << endl;
        }
    }


};

int main()
{
}