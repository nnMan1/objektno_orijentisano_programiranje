#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle(int& d):c(0, 0), r(1), dumy_ref(d), t(5)
{
    cout << "Circle ctr called" << endl;
}

Circle::Circle(double x, double y, double r, int& d):c(x, y), dumy_ref(d), t(4) {
    this->r = r;
}

Circle::~Circle()
{
    //dtor
}

void Circle::print() const {
    cout << "(" << c.Getx() <<"," << c.Gety() << "), " << r << endl;
}
