#ifndef GENMATRIX_CPP
#define GENMATRIX_CPP
#include "GenMatrix.h"
#include <exception>

using namespace std;

template <class T>
GenMatrix<T>::GenMatrix(int n, int m)
{
    this->n = n;
    this->m = m;
    this->data = new T[n * m];

    for(int i=0;i<n;i++)
        data[i] = 0;
}

template <class T>
GenMatrix<T>::~GenMatrix()
{
    //dtor
}


template <class T>
T& GenMatrix<T>::operator()(int i, int j) {

    if(i < 0 || j < 0 || i >= n || j >= m)
        throw 1;

    return data[i*m+j];
}

template <class T>
bool GenMatrix<T>::operator==(const GenMatrix<T>& o) const {
    if(n != o.n || m != o.m)
        return false;

    for(int i=0;i<n*m;i++)
        if(data[i] != o.data[i])
            return false;

    return true;
}

template <class T>
GenMatrix<T> GenMatrix<T>::operator-() const {
    GenMatrix<T> ret(n, m);

    for(int i=0;i<n*m;i++)
        ret.data[i] = -data[i];

    return ret;
}

template <class T>
GenMatrix<T>& GenMatrix<T>::operator++() {   //prefiksni operator ++
    for(int i=0;i<n*m;i++)
        data[i]++;

    return *this;
}

template <class T>
GenMatrix<T> GenMatrix<T>::operator++(int) { //postfiksni operator ++
    GenMatrix<T> ret(n, m);

    for(int i=0;i<n*m;i++)
        ret.data[i] = data[i];  //sacuvamo pocetno stanje objekata

     for(int i=0;i<n*m;i++)
        data[i]++;

    return ret; //vracamo neizmijenjenu verziju objekta
}

template <class T>
T* GenMatrix<T>::reduce_mean() {
    T* mean = new T[n];

    for(int i=0;i<n;i++)
        mean[i] = 0;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
         mean[i] += (*this)(i, j);

    for(int i=0;i<n;i++)
        mean[i] /= m;

    return mean;
}

template <class T>
GenMatrix<T> GenMatrix<T>::operator*(GenMatrix<T>& o) {
    if(m != o.n)
        throw 2;

    GenMatrix<T> ret(n, o.m);

    for(int i=0;i<n;i++)
        for(int j=0;j<o.m;j++)
            for(int k=0;k<m;k++)
                ret(i, j) += (*this)(i, k) * o(k, j);

    return ret;
}

#endif // GENMATRIX_CPP
