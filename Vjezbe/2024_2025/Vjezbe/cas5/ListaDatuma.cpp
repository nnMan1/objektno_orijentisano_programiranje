#include "ListaDatuma.h"
#include "iostream"

using namespace std;

ListaDatuma::ListaDatuma() {
    this->head = nullptr;
    this->tail = nullptr;
}

ListaDatuma::ListaDatuma(const Datum& d) {
    this->head = nullptr;
    this->tail = nullptr;

    this->dodaj_na_pocetak(d);
}


ListaDatuma::~ListaDatuma() {
    cout << "Poziva se destruktor za listu " << this << endl;
    clear_list(this->head);
}

ListaDatuma::ListaDatuma(const ListaDatuma& l) {

    cout << "Poziva se konstruktor kopije za listu " << this << endl;

    this->head = nullptr;
    this->tail = nullptr;

    for(Node* it = l.head; it != nullptr; it = it->next) {
        this->dodaj_na_kraj(it->val);
    }
}

void ListaDatuma::dodaj_na_pocetak(const Datum& d) {
    this->head = new Node(d, this->head);

    if(this->tail == nullptr)
        this->tail = this->head;
}

void ListaDatuma::dodaj_na_kraj(const Datum& d) {

    if(this->head == nullptr)
        return this->dodaj_na_pocetak(d);

    Node *n = new Node(d);
    this->tail->next = n;    
    this->tail = n;
}

void ListaDatuma::ukloni(const Datum& d) {
    Node **parent = &(this->head);
    for(Node *it=head; it!=nullptr; parent=&(it->next), it=it->next) {
        if(it->val.razlika(d) == 0) {
            if(it == tail) 
                tail = *parent;
            
            *parent = it->next;
            delete it;
            return;
        }
    }
}

void ListaDatuma::pisi() const {
    for(Node* it=head; it != nullptr; it = it->next) {
        it->val.pisi(); cout << "   ";
    }
}

void ListaDatuma::clear_list(Node * head) {
    if(head == nullptr)
        return;

    clear_list(head->next);
    delete head;
}
