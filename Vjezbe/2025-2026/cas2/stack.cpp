#include "stack.h"
#include <iostream>

using namespace std;

Stack::Stack(int cap) {
    this->data = new int[cap];
    this->cap = cap;
    this->pop_ = 0;

    // matr = new int*[n];
    // for(int i=0;i<m;i++)
    //     matr[i] = new int[m];
}

Stack::Stack(const Stack& o) {
    this->cap = o.cap;
    this->pop_ = o.pop_;
    this->data = new int[this->cap];

    for(int i=0;i<o.pop_;i++)
        this->data[i] = o.data[i];
}

Stack::~Stack() {
    if(data != nullptr)
        delete[] data;

    // for(int i=0;i<n;i++)
    //     delete[] matr[i];
    // delete[] matr;
}


void Stack::push(int val) {
    if(this->cap == this->pop_) {
        int *n_data = new int[this->pop_ * 2];
        for(int i=0;i<this->pop_;i++)
            n_data[i] = this->data[i];

        delete[] this->data;
        this->data = n_data;
        this->cap *= 2;
    }

    this->data[pop_++] = val;
}

int Stack::top() {
    if(this->pop_ == 0) {
        cout << "Stack je prazan" << endl;
        exit(1);
    }
    return this->data[this->pop_ - 1];
}

int Stack::pop() {
    if(this->pop_ == 0) {
        cout << "Stack je prazan" << endl;
        exit(1);
    }
    return this->data[--this->pop_];
}

bool Stack::empty() const {
    return this->pop_ == 0;
}

void Stack::print() const {
    for(int i=0;i<this->pop_;i++)
        cout << this->data[i] << " ";
}
