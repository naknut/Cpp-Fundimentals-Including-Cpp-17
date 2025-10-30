#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main() {
    Person p1("Marcus", "Isaksson", 123);
    {
        Person p2;
    }
    cout << "after innermost block" << endl;
    string name = p1.getName();

    return 0;
}