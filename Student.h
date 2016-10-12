#ifndef _STUDENT
#define _STUDENT

#include "Person.h"
class Student : public Person {
    private:
        int     ID;
        double  GPA;

    public:
        Student();
        Student(int i, double g);
        Student(std::string n, int a, int i, double g);

        int    getID()          { return ID; }
        void   setID(int i)     { ID = i; }
        double getGPA()         { return GPA; }
        void   setGPA(double g) { GPA = g; }
};
#endif
