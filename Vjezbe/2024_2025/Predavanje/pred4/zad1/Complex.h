#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;


class Complex
{
    public:
        Complex(double re = 0);
        Complex(double re, double im);
        virtual ~Complex();

        double GetRe() const { return re; }
        void SetRe(double val) { re = val; }
        double GetIm() const { return im; }
        void SetIm(double val) { im = val; }

        void print(double n, char c) const;
        void print(int n, char c='#') const ;

    protected:

    private:
        double re;
        double im;
};

#endif // COMPLEX_H
