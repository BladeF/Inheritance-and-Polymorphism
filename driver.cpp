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

    Person *x = new Worker;
    Person *y = new Parent("Jackie", 50, true, 20);
    Person *z = new Student("Blade", 23, 1234, 3.9);

    displayWrapper(x);
    displayWrapper(y);
    displayWrapper(y);

    return EXIT_SUCCESS;
}

void displayWrapper(Person *p) {

    cout << "Displaying information:\n\n";
    p->displayInfo();
    cout << endl << endl;

    return;
}
