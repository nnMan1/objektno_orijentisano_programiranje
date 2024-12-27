#include "RedTijela.h"
#include <iostream>

using namespace std;

RedTijela::RedTijela(int cap) {
    if(cap <= 0) {
        cout << "Kapacitet mora biti veci od 0";
        exit(1);
    }

    this->data = new Tijelo*[cap];
    this->cap = cap;
    this->pop = 0;
}