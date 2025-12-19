#ifndef MATRICA_CPP
#define MATRICA_CPP

#include "matrica.h"

template<class T, int N, int M>
Matrica<T, N, M>::Matrica() {
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            data[i][j] = 0;
}

template<class T, int N, int M>
T& Matrica<T,N,M>::operator()(int i, int j) {
    if(i < 0 || i >= N || j < 0 || j >= M) {
        // MatricaExcaption e("Indeks izvan opsega");
        // throw e;

        // throw MatricaIndexExcaption();
        // throw "Greska";

        ///NE RADIDIT
        // MatricaIndexExcaption e;
        // throw &e;

        //AKO BAS MORA POKAZIVAC
        // throw new MatricaIndexExcaption();

        throw std::out_of_range("Underflow index");
    }

    return data[i][j];
}

template<class T, int N, int M>
template<int P>
Matrica<T, N, P> Matrica<T,N,M>::operator*(Matrica<T, M, P> m) {
    Matrica<T, N, P> ret;

    for(int i=0;i<N;i++)
        for(int j=0;j<P;j++)
            for(int k=0;k<M;k++)
                ret(i, j) += data[i][k] * m(k, j);
    
    return ret;
}


#endif
