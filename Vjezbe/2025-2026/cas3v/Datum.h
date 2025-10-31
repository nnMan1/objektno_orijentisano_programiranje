#ifndef DATUM_H
#define DATUM_H
class Datum {
    public:
        Datum();
        ~Datum();
        Datum(int, int, int);
        int get_d() const;
        int get_m() const;
        int get_g() const;
        static int get_br_instanci() { return br_instanci; }
        bool prestupna() const;

        Datum& operator++();
        Datum operator++(int);

        static bool validan(int d, int g, int m);

        void print();
    protected:
    private:
        int d;
        int m;
        int g;

        static int br_instanci;
        static int br_dana_u_mjesecu[2][13];
};

#endif