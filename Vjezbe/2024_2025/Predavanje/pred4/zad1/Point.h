#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point() {}
        Point(double, double);
        virtual ~Point();

        double Getx() const { return x; }
        void Setx(double val) { x = val; }
        double Gety() const { return y; }
        void Sety(double val) { y = val; }

    protected:

    private:
        double x;
        double y;
};

#endif // POINT_H
