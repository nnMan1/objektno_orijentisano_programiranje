#ifndef DATUM_H
#define DATUM_H

class Datum {
protected:
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

    Datum sljedeci() const;
    Datum prethodni() const;
    int razlika(const Datum&) const;
    int get_dan_u_nedelji() const;
    
    bool prestupna() const;
    int broj_dana_od_pocetka_godine() const; 

    virtual void pisi() const;

private:
    static const int mjesec_dan[2][13];
    int br_dana_od_111() const;
    
};

#endif