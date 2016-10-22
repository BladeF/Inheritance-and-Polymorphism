#include "Worker.h"

Worker::Worker() : Person() {
    company = "Google";
    wage    = 17.25;
}

Worker::Worker(std::string c, double w) : Person() {
    company = c;
    wage    = w;
}

Worker::Worker(std::string n, int a, std::string c, double w) : Person(n, a) {
    company = c;
    wage    = w;
}

void Worker::displayInfo() {

    std::cout << "Name: "    << name    << std::endl
              << "Age: "     << age     << std::endl
              << "Company: " << company << std::endl
              << "Wage: "    << wage    << std::endl;

}
