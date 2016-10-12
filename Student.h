#ifndef _STUDENT
#define _STUDENT

class Student {
    private:
        int     ID;
        double  GPA;

    public:
        Student() { ID = 0000; GPA = 4.0; }
        Student(int i, double g) { ID = i; GPA = g; }

        int    getID()          { return ID; }
        void   setID(int i)     { ID = i; }
        double getGPA()         { return GPA; }
        void   setGPA(double g) { GPA = g; }
};
#endif
