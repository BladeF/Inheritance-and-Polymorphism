#include <iostream>
#include <cstdlib>

#include "Person.h"
#include "Student.h"
#include "Worker.h"
#include "Parent.h"
using namespace std;

//Prototypes
void displayWrapper(Person *p);

int main(int argc, char **argv) {

    Person *family[3] =
        {
            new Worker("Aaron", 47, "Toledo Fire and Rescue", 60.75),
            new Parent("Jackie", 50, true, 20),
            new Student("Blade", 23, 1234, 3.9)
        };

    for(int i = 0; i < 3; i++) {
        displayWrapper(family[i]);
        delete family[i];
    }

    return EXIT_SUCCESS;
}

void displayWrapper(Person *p) {

    cout << "Displaying information:\n";
    cout << "\tName: " << p->getName() << endl;
    cout << "\tType: " << p->getType() << endl;
    cout << endl << endl;

    return;
}
