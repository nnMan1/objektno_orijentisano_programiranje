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
        ListaDatuma(const ListaDatuma&);
        ListaDatuma& dodaj_na_pocetak(const Datum&);
        ListaDatuma& dodaj_na_kraj(const Datum&);

        ListaDatuma& operator=(const ListaDatuma&);
        

        void print() const;
    protected:
    private:
        Node* head;

        Node* dodaj_na_kraj(Node* head, const Datum&);
        void clear_list(Node*);
};

#endif