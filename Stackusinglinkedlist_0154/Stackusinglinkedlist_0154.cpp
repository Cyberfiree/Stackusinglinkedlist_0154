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

    // Operasi isEmpty: Memeriksa apakah stack kosong
    bool isEmpty() {
        return top == NULL;     // Mengembalikan true jika pointer top adalah NULL, menandakan stack kosong
    }
};

int main() {
    Stack stack;
    int choice = 0;
    int value;

    while (choice != 5) {
        cout << "1. push\n";
        cout << "2. pop\n";
        cout << "3. peek\n";
        cout << "4. exit\n";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Masukkan nilai untuk di-push:";
            cin >> value;
            stack.push(value);  // Memanggil operasi push untuk menambahkan nilai ke stack
            break;

        case 2:
            if (!stack.isEmpty()) {
                stack.pop();    // Memanggil operasi pop untuk menghapus elemen teratas dari stack
            }
            else {
                cout << "Stack kosong. Tidak bisa melakukan pop." << endl;
            }
            break;

        case 3:
            if (!stack.isEmpty()) {
                stack.peek();   // Mendapatkan nilai elemen teratas
            }
            else {
                cout << "Stack kosong. Tidak ada nilai teratas." << endl;
            }
            break;

        case 4:
            cout << "Keluar dari program." << endl;
            break;

        default:
            cout << "Pilihan tidak valid. Coba lagi." << endl;
            break;
        }

        cout << endl;
    }
    return 0;
}