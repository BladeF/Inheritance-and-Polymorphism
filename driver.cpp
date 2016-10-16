#include <iostream>
#include <cstdlib>

#include "Person.h"
#include "Student.h"
using namespace std;

int main(int argc, char **argv) {
    Person x;
    Student y("Blade", 23, 1234, 3.9);

    x.displayInfo();
    y.displayInfo();

    return EXIT_SUCCESS;
}
