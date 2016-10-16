#include <iostream>
#include "Student.h"

Student::Student() : Person() {
    ID  = 0000;
    GPA = 4.0;
}

Student::Student(int i, double g) : Person() {
    ID  = i;
    GPA = g;
}

Student::Student(std::string n, int a, int i, double g) : Person(n, a) {
    ID  = i;
    GPA = g;
}

void Student::displayInfo() {

    Person::displayInfo();

    std::cout << "ID: "   << ID   << std::endl
              << "GPA: "  << GPA  << std::endl;

}
