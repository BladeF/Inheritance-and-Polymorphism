#include <iostream>
#include "Parent.h"

Parent::Parent() : Person () {
    married = true;
    numKids = 2;
}

Parent::Parent(bool m, int nk) : Person() {
    married = m;
    numKids = nk;
}

Parent::Parent(std::string n, int a, bool m, int nk) : Person(n, a) {
    married = m;
    numKids = nk;
}

void Parent::displayInfo() {

    std::string text;

    if(married) text = "Yes";
    else        text = "No";

    std::cout << "Name: "           << name    << std::endl
              << "Age: "            << age     << std::endl
              << "Married: "        << text    << std::endl
              << "Number of Kids: " << numKids << std::endl;

}
