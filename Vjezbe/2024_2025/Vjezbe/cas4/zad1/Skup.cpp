#include "Skup.h"
#include <iostream>

using namespace std;

Skup::Skup(): cap(0), pop(0)
{
}

Skup::Skup(int x): cap(1), pop(1)
{
    data = new int[1];
    data[0] = x;
}

void Skup::print() const {
    cout << '{';
    for(int i=0;i<pop - 1;i++)
        cout << data[i] << ", ";

    if(pop > 0)
        cout << data[pop - 1];

    cout << '}';
}

Skup Skup::unija(const Skup& s) const {

    Skup ret;
    int *data = new int[pop + s.pop];

    int i = 0;
    int j = 0;
    int e = 0;

    while(i < pop && j < s.pop) {
        if(this->data[i] < s.data[j]) {
            data[e] = this->data[i];
            i++;
        } else 
            if(this->data[i] > s.data[j]){
                data[e] = s.data[j];
                j++;
            } else {
                data[e] = s.data[j];
                j++;
                i++;
            }
        
        e++;
    }

     while(i < pop) {
        data[e] = this->data[i];
        i++;
        e++;
     }

     while(j < s.pop) {
        data[e] = s.data[j];
        j++;
        e++;
     }

    ret.data = data;
    ret.pop = e;
    ret.cap = pop + s.pop;

    return ret;

}

Skup& Skup::dodaj(const Skup& s) {
    int *data = new int[pop + s.pop];

    int i = 0;
    int j = 0;
    int e = 0;

    while(i < pop && j < s.pop) {
        if(this->data[i] < s.data[j]) {
            data[e] = this->data[i];
            i++;
        } else 
            if(this->data[i] > s.data[j]){
                data[e] = s.data[j];
                j++;
            } else {
                data[e] = s.data[j];
                j++;
                i++;
            }
        
        e++;
    }

     while(i < pop) {
        data[e] = this->data[i];
        i++;
        e++;
     }

     while(j < s.pop) {
        data[e] = s.data[j];
        j++;
        e++;
     }

    delete[] this->data;
    this->data = data;
    this->cap = this->pop + s.pop;
    this->pop = e;

    return *this;
}

Skup::~Skup()
{
    //dtor
}
