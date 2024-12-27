#ifndef RED_H
#define RED_H

template<class T>
class Red
{
    T* data;
    int cap;
    int pop;

    public:

        Red(int n=5);
        Red(const Red<T>&);

        Red<T>& operator=(const Red<T>&);
        T& operator[](int);
        Red<T>& operator+=(T);
        T pop();

    protected:

    private:
};

#include "Red.cpp"

#endif // RED_H
