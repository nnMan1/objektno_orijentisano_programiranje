#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string.h>

using namespace std;

class Student {
    public:
    char ime[20];
    char prezime[20];
    int br_ind;
    int god_upisa;

    public:
    void print_student();
    void setData(char *im, char * pre, int br_i, int g_u);
};

#endif

