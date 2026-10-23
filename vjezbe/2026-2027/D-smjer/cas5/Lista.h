#ifndef LISTA_H
#define LISTA_H
#include "Datum.h"

class Lista;

class Node {
    Datum d;
    // Node* next;
    unique_ptr<Node> next;
    friend Lista;

    public:
    // Node(Datum d, Node *next=nullptr) {
    Node(Datum d, unique_ptr<Node> next=nullptr) {
        this->d = d;
        this->next = move(next);
    }
    ~Node() {
        cout << "Oslobadja se cvor koji cuva datum "; d.pisi(); cout << endl;
    }
};

class Lista {
    // Node* head;
    unique_ptr<Node> head;
    public:
    Lista() {
        this->head = nullptr;
    }

    // ~Lista() {
    //     Node*it = head;
    //     while(it != nullptr) {
    //         Node *temp = it->next;
    //         delete it;
    //         it = temp;
    //     }
    // }

    void dodaj_na_pocetak(Datum v) {
        // head = new Node(v, head);
        head = make_unique<Node>(v, move(head));
    }

    void print() {
        for(auto it=head.get();it!=nullptr;it=it->next.get()) {
            it->d.pisi(); cout <<endl;
        }
    }
};

#endif