#include "ListaDatuma.h"
#include <iostream>

using namespace std;

ListaDatuma::ListaDatuma() {
    this->head = nullptr;
}

ListaDatuma ListaDatuma::dodaj_na_pocetak(const Datum& d) {
    this->head = new Node(d, this->head);
    return *this;
}

void ListaDatuma::print() const {
    Node* it = head;

    while(it != nullptr) {
        it->val.print(); cout << " -> " ;
        it = it->next;
    }

    cout << "NULL";
}