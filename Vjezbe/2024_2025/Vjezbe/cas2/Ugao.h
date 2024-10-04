#ifndef UGAO_H
#define UGAO_H

#include <math.h>
#include<iostream>
using namespace std;

class Ugao
{
    double val;
    const double PI = 3.14;

    public:
        void set_rad(double);
        double get_rad() const;

        void set_step(int s, int m, int d);
        Ugao plus(const Ugao &u2) const;


    protected:

    private:
        void normalize();
};

#endif // UGAO_H
