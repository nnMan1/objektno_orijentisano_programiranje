#ifndef DATUM_H
#define DATUM_H

class Datum {
    int d, m, g;

public:
    Datum();
    Datum(int, int, int);

    void set_d(int);
    void set_g(int);
    void set_m(int);

    int get_d() const {return d;}
    int get_m() const {return m;}
    int get_g() const {return g;}

    static bool validan(int d, int m, int g);

    bool prestupna() const;
    int broj_dana_od_pocetka_godine() const; 

    void pisi() const;

private:
    static const int mjesec_dan[2][13];
};

#endif