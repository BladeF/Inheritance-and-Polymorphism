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

    std::cout << "Name: " << name << std::endl
              << "Age: "  << age  << std::endl
              << "ID: "   << ID   << std::endl
              << "GPA: "  << GPA  << std::endl;

}
