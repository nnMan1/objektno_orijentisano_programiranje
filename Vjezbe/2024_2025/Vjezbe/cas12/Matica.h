#ifndef MATICA_H
#define MATICA_H

template<class T, int N, int M>
class Matrica
{
    T data[N][M];
    public:

    Matrica();
    Matrica(const Matrica<T, N, M>&);

    T& operator()(int, int);

    template<int P>
    Matrica<T, N, P> operator*(Matrica<T, M, P>& m1);

    protected:

    private:
};

#include "Matica.cpp"
#endif // MATICA_H
