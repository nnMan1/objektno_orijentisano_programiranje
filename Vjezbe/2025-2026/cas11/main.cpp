#include <iostream>
#include "Stack.h"
#include "Student.h"

using namespace std;


class StackInt {
    int data[100];
    int _pop;
    
    void push(int x){}
    int pop(){}
    int peek(){}
};

class StackStudent {
    Student data[100];
    int _pop;
    
    void push(Student s){}
    Student pop(){}
    Student peek(){}
};

template <class T>
bool compare(T x, T y) {
    return x < y;
}

bool compare(int x, int y) {
    return x < y;
}

bool compare(double x, double y) {
    return x < y;
}

int main() {

    cout << compare(5, 6) << endl;
    cout << compare(7.3, 7.1)<< endl;

    Stack<int> s1;
    Stack<double, 50> s2;
    Stack<Student, 90> s3;
    Stack<int, 40> s4;

    s1.push(5);
    s1.pop();

    Student st1("Marko", 1, 24);
    Student st2("Slavko", 5, 25);
    cout << compare(st1, st2) << endl;
    s3.push(st1);
    s3.push(st2);
    s3.pop();

    return 0;
}