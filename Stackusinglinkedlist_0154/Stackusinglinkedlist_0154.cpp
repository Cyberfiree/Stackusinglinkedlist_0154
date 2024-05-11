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
    }
};

int main()
{
}