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

    void dodaj_na_pocetak(const Datum&); 

    void pisi() const;
};

#endif