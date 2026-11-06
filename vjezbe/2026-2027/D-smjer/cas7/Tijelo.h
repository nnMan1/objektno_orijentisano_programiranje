#ifndef TIJELO_H
#define TIJELO_H
#include <iostream>

using namespace std;

class Tijelo {
    static int counter;
    string id;
    protected:
    Tijelo(string tip);
    Tijelo(const Tijelo&);
    public:
    virtual double zapremina() const = 0;
    virtual Tijelo* kopija() const = 0;
    virtual void pisi() const;
    string get_id() const;
};

#endif