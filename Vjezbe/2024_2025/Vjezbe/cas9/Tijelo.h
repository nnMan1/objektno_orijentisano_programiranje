#ifndef TIJELO_H
#define TIJELO_H

#include <iostream>
using namespace std;

class Tijelo {
protected:
    char id[10];
    static int t_cnt;

public:
    Tijelo(char);

    virtual char vrsta() const = 0;
    virtual double zapremina() const = 0;
    virtual Tijelo* kopija() const = 0;
    virtual void pisi() const { cout << "Tijelo";};
};

#endif