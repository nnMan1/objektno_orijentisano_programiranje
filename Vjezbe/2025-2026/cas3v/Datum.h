#ifndef DATUM_H
#define DATUM_H

class Datum {
    public:
        Datum();
        Datum(int, int, int);
        int get_d() const;
        int get_m() const;
        int get_g() const;
        bool prestupna() const;
    protected:
    private:
        int d;
        int m;
        int g;
};

#endif