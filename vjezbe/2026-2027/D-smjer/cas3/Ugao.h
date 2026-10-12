//#pragma once
#ifndef UGAO_H
#define UGAO_H
#include <iostream>
#include <cmath>

using namespace std;

class Ugao {
    private:
    double vrijednost;

    public:
    Ugao(double v) {
        set_rad(v);
    }

    void set_rad(double v) {
        int br_krugova = v / (M_PI * 2);
        
        v = v - br_krugova * (M_PI * 2);
        if(v < 0)
            v += M_PI * 2;

        vrijednost = v;
    }

    double get_rad() const {
        return vrijednost;
    }

    void set_step(double v) {
        vrijednost = (M_PI * 2) / 360 * v;
    }   

     double get_step() const {
        return 360 / (M_PI * 2) * vrijednost;
    }

    void stampa() const {
        cout << get_step() << "step";
    }

    Ugao plus(Ugao u) {
        return Ugao(vrijednost + u.vrijednost);
    }

    Ugao minus(Ugao u) {
        return Ugao(vrijednost - u.vrijednost);
    }
};

#endif