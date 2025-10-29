#include "Person.h"

int main() {
    Person p1("Marcus", "Isaksson", 123);
    Person p2;
    std::string name = p1.getName();

    return 0;
}