#include "RedTijela.h"
#include <iostream>
using namespace std;

RedTijela::RedTijela(int cap) {
    this->data = new Tijelo*[cap];
    this->cap = cap;
    this->_pop = 0;
}

RedTijela::RedTijela(const RedTijela& r) {
    this->cap = r.cap;
    this->_pop = r._pop;
    this->data = new Tijelo*[cap];
    
    for(int i=0;i<_pop;i++)
        data[i] = r.data[i];
}

RedTijela& RedTijela::operator=(const RedTijela& r) {
    if(this == &r) 
        return *this;

    delete[] this->data;

    this->cap = r.cap;
    this->_pop = r._pop;
    this->data = new Tijelo*[cap];
    
    for(int i=0;i<_pop;i++)
        data[i] = r.data[i];
    
    return *this;
}

bool RedTijela::pun() {
    return cap == _pop;
}

bool RedTijela::prazan() {
    return _pop == 0;
}

RedTijela& RedTijela::operator+=(Tijelo& t) {
    if(this->_pop == cap) {
        cout << "Red je vec pun";
        exit(1);
    }

    this->data[_pop++] = &t;
    return *this;
}

Tijelo& RedTijela::get() {
    if(_pop == 0) {
        cout << "Red je prazan";
        exit(1);
    }

    return *data[0];
}

Tijelo& RedTijela::pop() {
    if(_pop == 0) {
        cout << "Red je prazan";
        exit(1);
    }

    Tijelo *ret = data[0];

    for(int i=1;i<_pop;i++)
        data[i-1] = data[i];

    _pop--;
    return *ret;
}

Tijelo& RedTijela::operator[](int i) {
    if(_pop < i || i < 0) {
        cout << "Indeks izvan opsega";
        exit(1);
    }

    return *data[i];
}

Tijelo& RedTijela::operator[](int i) const {
    if(_pop < i || i < 0) {
        cout << "Indeks izvan opsega";
        exit(1);
    }

    return *data[i];
}

ostream& operator<<(ostream& os, const RedTijela& r) {
    os << "r[";
    for(int i=0;i<r._pop - 1;i++) {
        os<<r[i]<< ", ";
    }

    if(r._pop > 0) 
        os<<r[r._pop-1];
    os << "]";
    return os;
}