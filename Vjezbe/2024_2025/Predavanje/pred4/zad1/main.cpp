#include <iostream>
#include "Complex.h"
#include "Circle.h"
#include "Point.h"

using namespace std;

int main()
{
    Point p(0, 0);
    Point *p_ptr = new Point(1, 1);
    Point p2;

    int x;
    Circle c1(x);
    c1.print();

    Circle c2(4, 1, 5, x);
    c2.print();

    Circle c3(c2); //ekviv Circle c3 = c2;
//    c3 = c1;

    /*
    Complex c0;
    Complex c1(4, 6);
    Complex *c_ptr = new Complex();

    //c1.print();
    c1.print(10, '~');
    c_ptr -> print(10, '~');
    */
    return 0;
}
