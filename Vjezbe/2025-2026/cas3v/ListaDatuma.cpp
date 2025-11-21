#include "ListaDatuma.h"
#include <iostream>

using namespace std;

ListaDatuma::ListaDatuma() {
    this->head = nullptr;
}

ListaDatuma::ListaDatuma(const ListaDatuma& l) {
    this->head = nullptr;
    for(Node* it=l.head; it!=nullptr; it=it->next) 
        this->dodaj_na_kraj(it->val);
}

ListaDatuma& ListaDatuma::dodaj_na_pocetak(const Datum& d) {
    this->head = new Node(d, this->head);
    return *this;
}

ListaDatuma& ListaDatuma::dodaj_na_kraj(const Datum& d) {
    this->head = dodaj_na_kraj(this->head, d);
    return *this;
}

Node* ListaDatuma::dodaj_na_kraj(Node* head, const Datum& d) {
    if(head == nullptr) 
        return new Node(d, nullptr);
    
    head->next = dodaj_na_kraj(head->next, d);
    return head;
}

void ListaDatuma::clear_list(Node *head) {
    if(head == nullptr) 
        return;

    clear_list(head->next);
    delete head;
    return;
}

ListaDatuma& ListaDatuma::operator=(const ListaDatuma& l) {

    if(this == &l)
        return *this;

    clear_list(this->head);
    this->head = nullptr;

    for(Node* it=l.head; it!=nullptr; it=it->next) 
        this->dodaj_na_kraj(it->val);

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