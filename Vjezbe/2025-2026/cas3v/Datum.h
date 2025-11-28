#ifndef DATUM_H
#define DATUM_H
#include <iostream>

using namespace std;

class Datum {
    public:
        Datum();
        virtual ~Datum();
        Datum(int d);
        Datum(int, int, int);
        int get_d() const;
        int get_m() const;
        int get_g() const;
        static int get_br_instanci() { return br_instanci; }
        bool prestupna() const;
        int broj_dana_od_pocetka_godine() const;

        // int operator-(const Datum& d) const;
        //Datum operator-(int d);

        friend int operator-(const Datum& d1, const Datum& d2);
        Datum operator-(int d);

        Datum& operator++();
        Datum operator++(int);

        static bool validan(int d, int g, int m);

        virtual void print() const; //virtuelna funkcija
                                    //poziva se na osnovu tipa objekta
                                    //ne na osnovu tipa pokazivaca
        friend ostream& operator<<(ostream&, const Datum&);
        friend istream& operator>>(istream&, Datum&);

    protected:
    private:
        int d;
        int m;
        int g;

        static int br_instanci;
        static int br_dana_u_mjesecu[2][13];

        int br_dana_od_110() const;
};

#endif