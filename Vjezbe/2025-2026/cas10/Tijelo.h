#ifndef TIJELO_H
#define TIJELO_H

#include <iostream>
using namespace std;

class Tijelo {

    protected:
        string id;
    
    public:
        Tijelo(string);
        ~Tijelo();
        virtual char vrsta() const = 0;
        virtual double zapremina() const = 0;
        virtual Tijelo* kopija() const = 0;
        friend ostream& operator<<(ostream&, const Tijelo&);

    protected:
        virtual void pisi(ostream& os) const = 0;

};

#endif