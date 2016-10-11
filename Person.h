#ifndef _PERSON
#define _PERSON

#include <string>

class Person {
    private:
        std::string name;
        int         age;

    public:
        std::string getName()              { return name; }
        void        setName(std::string n) { name = n; }
        int         getAge()               { return age; }
        void        setAge(int a)          { age = a; }
};
#endif
