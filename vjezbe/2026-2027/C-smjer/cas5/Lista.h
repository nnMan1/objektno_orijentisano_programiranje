#ifndef LISTA_H
#define LISTA_H
#include "Datum.h"
#include <memory>

class Lista; //obecavam da ce da postoji klasa lista

class Node {
    Datum val;
    Node *next;
    // unique_ptr<Node> next; //jedini vlasnik od next
    friend Lista;  //da bih ovdje mogao da je koristim 
    
    Node(Datum val, Node *next=nullptr) {
        this->val = val;
        this->next = next;
    }
};

class Lista {
    Node *head;
    // unique_ptr<Node> head;
    public:
        Lista();
        ~Lista();
        Lista& dodaj_na_pocetak(Datum);
        void pisi() const;
};

#endif // LISTA_H