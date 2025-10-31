#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "Accum.h"
#include "Person.h"

int main() {
    Accum integers(0);
    integers += 3;
    integers += 7;
    cout << integers.GetTotal() << endl;

    Accum strings(string(""));
    strings += "hello";
    strings += " world";
    cout << strings.GetTotal() << endl;

    Accum<Person> people(0);
    Person p1("Cate", "Gregory", 123);
    Person p2("Else", "Someone", 456);
    people += p1;
    people += p2;
    cout << people.GetTotal() << endl;

    return 0;
}