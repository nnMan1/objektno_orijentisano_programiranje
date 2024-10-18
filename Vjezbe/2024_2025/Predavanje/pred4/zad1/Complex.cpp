#include "Complex.h"

Complex::Complex(double re) {
    this->re = re;
    this->im = im;
}

Complex::Complex(double re, double im) {
    this->re = re;
    this->im = im;
}

Complex::~Complex()
{
    //dtor
}

void Complex::print(double n, char c) const  {

    //this->re += 1;

    cout << "print(double , char) " << endl;
    cout << re << " " << im << endl;
}

void Complex::print(int n, char c) const {
    for(int i=0;i<n;i++)
        cout << c;
    cout << endl;
    cout << re << " " << im << endl;
}
