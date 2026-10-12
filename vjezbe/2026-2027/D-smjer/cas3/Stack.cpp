#include "Stack.h"
#include <iostream>

Stack::Stack() {
    cout << "Poziva se konstruktor bez argumenata" << endl;
    data = new int[10];
    cap = 10;
    pop = 0;
}

Stack::Stack(const Stack& s) {
    cout << "Poziva se konstruktor kopije" << endl;
    data = new int[s.cap];
    cap = s.cap;
    pop = s.pop;

    for(int i=0;i<pop;i++)
        data[i] = s.data[i];
}

Stack::~Stack() {
    cout << "Poziva se destruktor" << endl;
    delete[] data;
}

void Stack::push(int x) {
    if(pop == cap) {
        int *novi = new int[cap*2];
        cap *= 2;

        for (int i = 0; i < pop; i++)
            novi[i] = data[i];

        delete[] data; 
        data = novi;
    }

    data[pop] = x;
    pop ++;
}

bool Stack::empty() const {
    return pop == 0;
}

int Stack::top() const {
    if(pop > 0)
        return data[pop-1];

    cout << "Stack je prazan" << endl;
    return 0;
}

int Stack::remove() {
    if(pop > 0) {
        return data[--pop];
    }

    cout << "Stack je prazan" << endl;
    return 0;
}

void Stack::print() const {
    for(int i=0;i<pop;i++)
        cout << data[i] << " ";
}