#ifndef IZVOD_H
#define IZVOD_H

class Izvod {
    double* iznosi;          // niz na heapu
    int broj;

public:
    Izvod(int broj);
    // konstruktor kopije 
    Izvod(const Izvod& drugi); 

    ~Izvod();

    void postavi(int i, double x) { iznosi[i] = x; }
    double uzmi(int i) const      { return iznosi[i]; }
};

#endif