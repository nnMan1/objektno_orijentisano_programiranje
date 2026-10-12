#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack() {
    cout << "Poziva se konstruktor bez argumenata za stack" << endl;
    data = new Ugao[10];
    cap = 10;
    pop = 0;
}

Stack::Stack(const Stack& s) {
    data = new Ugao[s.cap];
    cap = s.cap;
    pop = s.pop;

    for(int i=0;i<pop;i++)
        data[i] = s.data[i];
}

Stack::~Stack() {
    cout << endl << "Poziva se destruktor za stack" << endl;
    delete[] data;
}

void Stack::push(Ugao a) {
    if(pop == cap) {
        Ugao *novi = new Ugao[cap*2];
        cap *= 2;

        for(int i=0;i<pop;i++) 
            novi[i] = data[i];
        
        delete[] data;
        data = novi;
    }

    data[pop] = a;
    pop++;
}

bool Stack::empty() {
    return pop == 0;
}

Ugao Stack::top() {
    if(pop >0)
        return data[pop-1];

    cout << "Stack je prazan" << endl;
    return Ugao(0);
}

Ugao Stack::remove() {
     if(pop >0) 
        return data[--pop];
    
    cout << "Stack je prazan" << endl;
    return Ugao(0);
}

void Stack::stampaj() {
    for(int i=0;i<pop;i++)
        cout << data[i].get_step() << " ";
}



