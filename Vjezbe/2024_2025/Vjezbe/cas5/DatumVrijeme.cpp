#include "DatumVrijeme.h"

#include <iostream>
using namespace std;

DatumVrijeme::DatumVrijeme() {
    cout << "Konstruktor izvedene kase DatumVrijeme klase bez argumenata" << endl;

    hh = 0;
    mm = 0;
}

DatumVrijeme::DatumVrijeme(int d, int m, int g, int hh, int mm): Datum(d, m, g) {

    cout << "Konstruktor izvedene klase DatumVrijeme sa 5 argumenata" << endl;

    if(hh < 0 || hh >= 24) {
        cout << "Pogresna vrijednost za hh" << endl;
        exit(1);
    }

    this->hh = hh;

    if(mm < 0 || mm >=60) {
        cout << "Pogresna vrijednost za mm" << endl;
        exit(1);
    }

    this->mm = mm;
}

void DatumVrijeme::pisi() const {
    Datum::pisi();
    cout << hh << ":" << mm;
}