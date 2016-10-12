#include <iostream>
#include <cstdlib>

#include "Person.h"
#include "Student.h"
using namespace std;

int main(int argc, char **argv) {
    Person x;
    Student y("Blade", 23, 1234, 3.9);

    cout << "Person: "  << x.getName() << " " << x.getAge() << endl;
    cout << "Student: " << y.getName() << " " << y.getAge() << " "
                        << y.getID()   << " " << y.getGPA() << endl;

    return EXIT_SUCCESS;
}
