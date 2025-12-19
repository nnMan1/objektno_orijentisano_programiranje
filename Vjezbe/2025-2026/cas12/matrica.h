#ifndef MATRICA_H
#define MATRICA_H
#include <string.h>
#include <exception>

class MatricaBaseExcaption:public std::exception {
    char *poruka;

    public:
    virtual char* get_poruka() {
        return "Matrica exception";
    }

    virtual const char* what() noexcept {
        return "Matrica exception";
    }
};

class MatricaIndexExcaption:public MatricaBaseExcaption {
    
    public:
    
    char* get_poruka() {
        return "Matica index excpetion";
    }
};



template<class T, int N = 3, int M = 3>
class Matrica {
    T data[N][M];

    public:
    Matrica();
    T& operator()(int, int);

    template<int P>
    Matrica<T, N, P> operator*(Matrica<T, M, P>);
};

#include "matrica.cpp"

#endif