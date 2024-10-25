#include "Datum.h"
#include <iostream>

using namespace std;

Datum::Datum():d(1), m(1), g(1) {
}

Datum::Datum(int d, int m, int g) {
    set_g(g);
    set_m(m);
    set_d(d);
}

void Datum::set_d(int d) {
    
    if(d < 1 || d > mjesec_dan[prestupna()][m]) {
        cout << "Dan za mjesec " << m << ". mora biti izmedju 1 i "<< mjesec_dan[prestupna()][m] <<endl;
        exit(1);
    }

    this->d = d;
}

void Datum::set_m(int m) {
    if(m < 1 || m > 12) {
        cout << "Vrijednost za mjesec mora biti izmedju 1 i 12" << endl;
        exit(1);
    }

    this->m = m;
}

void Datum::set_g(int g) {
    this->g = g;
}

bool Datum::validan(int d, int m, int g) {
    if(m < 1 || m > 12) 
        return false;

    if(d < 1 ||  d > mjesec_dan[g % 400 == 0 || g % 100 != 0 && g % 4 == 0][m])
        return false;

    return true;
}

bool Datum::prestupna() const {
    return g % 400 == 0|| g % 100 != 0 && g % 4 == 0;
}

int Datum::broj_dana_od_pocetka_godine() const {
    int br = d;
    for(int i=1;i<m;i++)
        br += mjesec_dan[prestupna()][i];

    return br;
}

void Datum::pisi() const {
    cout << d << "." << m << "." << g << ".";
}

const int Datum::mjesec_dan[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                                     {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};