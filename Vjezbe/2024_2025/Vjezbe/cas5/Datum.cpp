#include "Datum.h"
#include <iostream>

using namespace std;

Datum::Datum():d(1), m(1), g(1) {
    cout << "Konstruktor osnovne klase Datum bez argumenata" << endl;
}


Datum::Datum(int d, int m, int g) {
    cout << "Konstruktor onsnovne klase Datum sa tri argumenata" << endl;
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

Datum Datum::sljedeci() const {
    Datum ret = *this;

    ret.d ++;

    if(ret.d > mjesec_dan[ret.prestupna()][ret.m]) {
        ret.d = 1;
        ret.m ++;
    }

    if(ret.m == 13) {
        ret.m = 1;
        ret.g ++;
    }

    return ret;
}

Datum Datum::prethodni() const {
    Datum ret = *this;

    ret.d --;

    if(ret.d == 0) {
        ret.m --;
        ret.d = mjesec_dan[ret.prestupna()][ret.m];
    }

    if(ret.m == 0) {
        ret.m = 12;
        ret.g --;
    }

    return ret;
}

int Datum::razlika(const Datum& d) const {
    return this->br_dana_od_111() - d.br_dana_od_111();
}

int Datum::get_dan_u_nedelji() const {
    int r = this->razlika(Datum(4, 11, 2024));

    return (7 + (r % 7)) % 7 + 1;
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

int Datum::br_dana_od_111() const {

    int br = broj_dana_od_pocetka_godine();
    br += 365 * (g-1);
    br += (g - 1) / 4;
    br -= (g - 1) / 100;
    br += (g - 1) / 400;

    return br;
}


const int Datum::mjesec_dan[2][13] = {{31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                                      {31, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};