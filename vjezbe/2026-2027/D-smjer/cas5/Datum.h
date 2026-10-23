#ifndef DATUM_H
#define DATUM_H
#include <iostream>

using namespace std;

class Datum {
    int d, m, g;
    static const int dan_mjesec[2][13];

    public:
    Datum();
    Datum(int d, int m, int g);
    ~Datum() {
        cout << "Oslobadja se memorija za datum ";
        pisi(); cout << endl;
    }

    int get_d() const { return d; }
    int get_m() const { return m; }
    int get_g() const { return g; }

    bool prestupna() const; 
    bool validan() const;
    int broj_dana_od_pocetka_godine() const;
    void pisi() const;

    static void staticka_metoda();
};

#endif