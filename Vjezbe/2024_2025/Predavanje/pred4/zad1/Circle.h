#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"

class Circle
{
    public:
        Circle(int &);
        Circle(double x, double y, double r, int&);
        virtual ~Circle();

        double Getr() { return r; }
        void Setr(double val) { r = val; }
        void print() const;

    protected:

    private:
        Point c;
        double r;
        int &dumy_ref;
        const int t;


};

#endif // CIRCLE_H
