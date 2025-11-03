#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

Person::Person(std::string first, std::string last, int arbitrary)
    : firstname(first), lastname(last), arbitrarynumber(arbitrary) { }

std::string Person::GetName() const {
    return firstname + " " + lastname;
}

void Person::AddResource() {
    pResource.reset();
    pResource = std::make_shared<Resource>("Resource for " + GetName());
}
