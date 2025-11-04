#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"
#include "Tweeter.h"
#include "Resource.h"

int main() {
    Tweeter t("Kate", "Gregory", 123, "@gregcons");
    Person* p = &t;
    Tweeter* pt = static_cast<Tweeter*>(p);
    cout << pt->GetName() << endl;

    Resource r("local");
    Tweeter* pt2;
    cout << "Use Resource or Tweeter?" << endl;
    std::string answer;
    std::cin >> answer;
    if (answer == "r") {
        pt2 = dynamic_cast<Tweeter*>(&r);
    } else {
        pt2 = dynamic_cast<Tweeter*>(p);
    }

    if (pt2) {
        cout << pt2->GetName() << endl;
    } else {
        cout << "pointer can't be cast to tweeter" << endl;
    }

    return 0;
}