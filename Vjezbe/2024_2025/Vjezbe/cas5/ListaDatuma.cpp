#include "ListaDatuma.h"
#include "iostream"

using namespace std;

ListaDatuma::ListaDatuma() {
    this->head = nullptr;
    this->tail = nullptr;
}

void ListaDatuma::dodaj_na_pocetak(const Datum& d) {
    this->head = new Node(d, this->head);
}

void ListaDatuma::pisi() const {
    for(Node* it=head; it != nullptr; it = it->next) {
        it->val.pisi(); cout << "   ";
    }
}
