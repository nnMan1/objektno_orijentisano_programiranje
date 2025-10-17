#ifndef STACK_H
#define STACK_H

class Stack {
    public:
        Stack(int cap=10);
        Stack(const Stack&);
        ~Stack();
        void push(int);
        int top();
        int pop();
        bool empty() const;

        void print() const; 
    protected:
    private:
        int *data;
        int cap;
        int pop_;
};

#endif