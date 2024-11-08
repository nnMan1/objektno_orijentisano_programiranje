#ifndef LISTADATUMA_H
#define LISTADATUMA_H
#include "Datum.h"

class Node {
    Datum val;
    Node* next;

    Node(const Datum& val, Node* next = nullptr): val(val), next(next){}

    friend class ListaDatuma;
};

class ListaDatuma{
    Node *head, *tail;

public:
    ListaDatuma();
    ~ListaDatuma();
    ListaDatuma(const Datum&);
    ListaDatuma(const ListaDatuma&);

    void dodaj_na_pocetak(const Datum&); 
    void dodaj_na_kraj(const Datum&); 
    void ukloni(const Datum&);

    void pisi() const;

private:
    void clear_list(Node * head);
};

#endif