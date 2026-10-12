//#pragma once
#ifndef UGAO_H
#define UGAO_H
#include <math.h>
#include <iostream>

using namespace std;

class Ugao {
private:
    double vrijednost; 
public:
    Ugao() {
        vrijednost = 0;
    }

    Ugao(double v) {
        set_rad(v);
    }

    double get_rad() {
        return vrijednost; 
    }

    void set_rad(double v) {
        //(int)(v / M_PI / 2) = broj cijelih krugova
        // ((int)(v / M_PI / 2))*(M_PI * 2) = broj radijana u cijelim krugovima
        v = v - ((int)(v / M_PI / 2))*(M_PI * 2);

        // v = fmod(v, (M_PI * 2));

        if(v < 0)
            v += (2 * M_PI);
        vrijednost = v;
    }

    double get_step() const {
        //  360 : 2PI = x : vrijednost
        //  360 / 2PI * vrijednost = x
        return 360 * ( vrijednost / (M_PI * 2));
    }

    void set_step(double v) {
        // 360 : 2PI = x : vrijednost
        // 2PI * x / 360 = vrijednost
        set_rad(M_PI * 2 * v / 360);
    }

    void stampaj() const {
        cout << vrijednost << endl;
    }

    Ugao plus(Ugao u) const {
        return Ugao(vrijednost + u.vrijednost);
    }

    Ugao minus(Ugao u) const {
        return Ugao(vrijednost - u.vrijednost);
    }
};
#endif