#ifndef STUDENT_H
#define STUDENT_H

class Student {
    char ime[20];
    int br_index;
    int god_upisa;

    public:
    Student(const char *ime="", int br_index=0, int god_upisa=0);
    bool operator<(const Student& o) const;
};

#endif