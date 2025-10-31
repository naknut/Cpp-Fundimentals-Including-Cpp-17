#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

Person::Person(std::string first, std::string last, int arbitrary)
    : firstname(first), lastname(last), arbitrarynumber(arbitrary) {
        cout << "constructing " << GetName() << endl;
    }

Person::~Person() {
    cout << "destructing " << GetName() << endl;
}

std::string Person::GetName() const {
    return firstname + " " + lastname;
}

bool Person::operator<(const Person& p) const {
    return arbitrarynumber < p.arbitrarynumber;
}

bool Person::operator<(int i) const {
    return arbitrarynumber < i;
}

bool operator<(int i, const Person& p) {
    return i < p.arbitrarynumber;
}