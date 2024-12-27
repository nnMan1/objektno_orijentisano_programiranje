#ifndef RED_CPP
#define RED_CPP
#include <iostream>
#include "Red.h"

using namespace std;

template<class T>
Red<T>::Red(int n) {
    this->data = new T[n];
    this->cap = n;
    this->pop = 0;
}

template<class T>
Red<T>::Red(const Red<T>& r) {
    this->data = new T[r.cap];
    this->cap = r.cap;
    this->pop = r.pop;

    for(int i=0;i<this->pop;i++)
        this->data[i] = r.data[i];
}

template<class T>
Red<T>& Red<T>::operator=(const Red<T>& r) {

    if(&r == this) {
        return *this;
    }

    delete[] this->data;

    this->data = new T[r.cap];
    this->cap = r.cap;
    this->pop = r.pop;

    for(int i=0;i<this->pop;i++)
        this->data[i] = r.data[i];

    return *this;
}

template<class T>
T& Red<T>::operator[](int i) {
    if(i < 0 || i >= pop) {
        cout << "Indeks izvan opsega" << endl;
        exit(1);
    }

    return this->data[i];
}

template<class T>
Red<T>& Red<T>::operator+=(T obj) {
    if(this->pop == this->cap) {
        cout << "Nije moguce dodati element u red" << endl;
        exit(2);
    }

    this->data[this->pop++] = obj;
    return *this;
}

template<class T>
T Red<T>::pop() {
    if(this->pop == 0) {
         cout << "Red je prazan" << endl;
        exit(4);
    }

    T ret = data[0];
}



#endif
