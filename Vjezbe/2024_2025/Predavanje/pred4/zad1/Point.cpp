#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(double x, double y) {
    cout << "Point ctr called" << endl;
    this -> x = x;
    this -> y = y;
}

Point::~Point()
{
    //dtor
}
