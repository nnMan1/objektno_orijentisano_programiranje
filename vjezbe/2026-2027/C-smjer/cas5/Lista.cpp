#include "Lista.h"
#include <iostream>

using namespace std;

Lista::Lista() {
    this->head = nullptr;
}

Lista::~Lista() {
    // delete head; //samo brise prvi element liste
    Node *it = head; //element koji trenutno brisemo
    int i = 0;
    while(it != nullptr) {
        Node *temp = it->next;
        delete it;
        it = temp;
        cout << "Obrisan cvor " << ++i << endl;
    }
}

Lista& Lista::dodaj_na_pocetak(Datum d) {
    head = new Node(d, head);
    return *this;
}

void Lista::pisi() const {
    for(auto it=head;it!=nullptr;it=it->next) {
        it->val.pisi(); cout << " ";
    }
}
