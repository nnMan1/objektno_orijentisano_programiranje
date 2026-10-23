#pragma once
#include <iostream>
#include "Datum.h"
using namespace std;

class Praznik {
    const string naziv; 
    Datum d;

    public:
    Praznik(string s, Datum d): naziv(naziv), d(d){
        // this->naziv = naziv; //const atribut -> mora preko liste inicijalizatora
        // this->d = d;         //objekat druge klase koja nema prazan konstrutor -> mora preko liste inicijalizatora
    }
};