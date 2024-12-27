#ifndef MATRICA_CPP
#define MATRICA_CPP
#include "Matica.h"

template<class T, int N, int M>
Matrica<T, N, M>::Matrica() {
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            data[i][j] = 0;
}

template<class T, int N, int M>
Matrica<T, N, M>::Matrica(const Matrica<T, N, M>& m) {
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            data[i][j] = m.data[i][j];
}


template<class T, int N, int M>
T& Matrica<T, N, M>::operator()(int i, int j) {
    return this->data[i][j];
}

template<class T, int N, int M>
template<int P>
Matrica<T, N, P> Matrica<T, N, M>::operator*(Matrica<T, M, P>& m1) {
    Matrica<T, N, P> ret;

    for(int i=0;i<N;i++) {
        for(int j=0;j<P;j++) {
            for(int k=0;k<M;k++)
                ret(i, j) += data[i][k] * m1(k, j);
        }
    }

    return ret;
}



#endif // MATRICA_CPP

