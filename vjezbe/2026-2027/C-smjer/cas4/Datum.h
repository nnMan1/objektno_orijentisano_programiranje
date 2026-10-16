#ifndef DATUM_H
#define DATUM_H

class Datum {
    int d, m, g;
    static const int dan_mjesec[2][13];

    public:
        Datum();
        Datum(int d, int m, int g);
    
        bool prestupna() const;

        int get_d() { return d; }
        int get_m() { return m; }
        int get_g() { return g; }

        int br_dana_od_pocetka_godine() const;
        bool validan() const;
};

#endif