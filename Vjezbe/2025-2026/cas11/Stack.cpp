#ifndef STACK_CPP
#define STACK_CPP

#include <iostream>
#include "Stack.h"

template <class T, int N>
Stack<T,N>::Stack() {
    data = new T[N];
    _pop = 0;
}

template <class T, int N>
T Stack<T,N>::pop() {
    if(_pop==0) {
        exit(1);
    }
    return data[_pop--];
}

#endif