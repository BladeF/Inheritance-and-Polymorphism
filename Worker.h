#ifndef _WORKER
#define _WORKER

#include "Person.h"

class Worker : public Person {

    private:
        std::string company;
        double      wage;
    public:
        Worker();
        Worker(std::string c, double w);
        Worker(std::string n, int a, std::string c, double w);

        std::string          getCompany()              { return company; }
        void                 setCompany(std::string c) { company = c; }
        double               getWage()                 { return wage; }
        void                 setWage(double w)         { wage = w; }

        virtual std::string getType()                  { return "Worker"; }

};
#endif
