#ifndef STACK_H
#define STACK_H

template <class T, int N=50>
class Stack {
    T *data;
    int _pop;
    public:
        Stack();

        void push(T x) {
            if(_pop == N)    {
                exit(1);
            }

            data[_pop++] = x;
        };
        T pop();
        T peek();
};

#include "Stack.cpp"

#endif