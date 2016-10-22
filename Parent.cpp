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
