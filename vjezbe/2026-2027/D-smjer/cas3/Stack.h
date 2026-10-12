//#pragma once
#ifndef STACK_H
#define STACK_H
#include "Ugao.h"

class Stack {
    int *data;
    int cap;
    int pop;
    public:
    Stack();
    Stack(const Stack&);
    ~Stack();
    void push(int x);
    bool empty() const;
    int top() const;
    int remove();
    void print() const;
};

#endif