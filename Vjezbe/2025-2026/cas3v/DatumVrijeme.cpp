#include "DatumVrijeme.h"

DatumVrijeme::DatumVrijeme() {
    //ako ne pozovemo konstruktor osnovne klase preko liste inicijalizatora,
    //podrazumijevano se poziva prazan konstruktor (ako postoji).
    //ako prazan konstruktor ne postoji, neophodno je da preko liste inicijalizatora 
    //specificiramo koji konstruktor se koristi 
    this->hh = 0;
    this->mm = 0;
}

DatumVrijeme::DatumVrijeme(int d, int m, int g, int hh, int mm):Datum(d, m, g) {
    cout << "Poziva se konstruktor za klasu DautmVrijeme" << endl;
    this->mm = mm;
    this->hh = hh;
}

DatumVrijeme::~DatumVrijeme() {
    cout << "Unistava se DatumVrijeme na adresi" << this << endl;
}

void DatumVrijeme::print() const {
    Datum::print();
    cout << " " << hh << ":" << mm;
}

ostream& operator<<(ostream& os, const DatumVrijeme& dv) {
    os << (Datum)dv << " " << dv.hh << ":" << dv.mm;
    return os;
}