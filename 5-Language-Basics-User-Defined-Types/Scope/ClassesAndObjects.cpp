#include "Person.h"
#include <iostream>

int main() {
    Person p1("Marcus", "Isaksson", 123);
    {
        Person p2;
    }
    std::cout << "after innermost block" << std::endl;
    std::string name = p1.getName();

    return 0;
}