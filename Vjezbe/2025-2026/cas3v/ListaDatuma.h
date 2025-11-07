#ifndef LISTA_DATUMA_H
#define LSITA_DATUMA_H
#include "Datum.h"

class Node {
    Datum val;
    Node* next;

    public:
        Node(const Datum& val, Node* next=nullptr):val(val) {
            this->next = next;
        }

    friend class ListaDatuma;
};

class ListaDatuma {
    public:
        ListaDatuma();
        ListaDatuma dodaj_na_pocetak(const Datum&);

        void print() const;
    protected:
    private:
        Node* head;
};

#endif