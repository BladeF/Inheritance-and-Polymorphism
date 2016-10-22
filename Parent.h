#ifndef _PARENT
#define _PARENT

#include "Person.h"

class Parent : public Person {

    private:
        bool married;
        int  numKids;

    public:
        Parent();
        Parent(bool m, int nk);
        Parent(std::string n, int a, bool m, int nk);

        bool getMarried()       { return married; }
        void setMarried(bool m) { married = m; }
        int  getNumKids()       { return numKids; }
        void setNumKids(int nk) { numKids = nk; }

        void displayInfo();

};

#endif
