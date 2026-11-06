#ifndef TIJELO_H
#define TIJELO_H

#include <iostream>
using namespace std;

class Tijelo {
    static int counter;
    string id;

    public:
    // Tijelo() {}
    Tijelo(string tip);
    // Tijelo(string tip, int id);

    virtual char vrsta() const = 0;
    virtual double zapremina() const = 0;
    virtual Tijelo* kopija() = 0;
    virtual void pisi() = 0;

    string get_id() const {
        return id;
    }
};

#endif