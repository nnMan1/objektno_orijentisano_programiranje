//#pragma once
#ifndef STACK_H
#define STACK_H
#include "Ugao.h"

class Stack {
    Ugao *data;
    int cap;
    int pop;

    public:

    Stack();
    Stack(const Stack&);
    ~Stack();
    void push(Ugao a);
    bool empty();
    Ugao top();
    Ugao remove();
    void stampaj();
};
#endif