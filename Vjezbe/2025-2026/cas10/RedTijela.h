#ifndef RED_TIJELA_H
#define RED_TIJELA_H
#include "Tijelo.h"

class RedTijela {
    Tijelo** data;
    int cap;
    int _pop;

    public:
        RedTijela(int cap=5);
        RedTijela(const RedTijela& r);

        RedTijela& operator=(const RedTijela&);
        bool pun();
        bool prazan();
        RedTijela& operator+=(Tijelo&);

        Tijelo& get();
        Tijelo& pop();

        Tijelo& operator[](int i);
        Tijelo& operator[](int i) const;

        friend ostream& operator<<(ostream&, const RedTijela&);
};

#endif
