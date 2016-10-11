#ifndef _STUDENT
#define _STUDENT

#include <string>

class Student {
    private:
        std::string ID;
        double      GPA;

    public:
        std::string getID()              { return ID; }
        void        setID(std::string i) { ID = i; }
        double      getGPA()             { return GPA; }
        void        setGPA(double g)     { GPA = g; }
};
#endif
