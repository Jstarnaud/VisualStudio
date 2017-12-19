#include <iostream>
#include "person.hpp"

using std::cout;
using std::endl;

int main()
{
    cout << "My Friends:\n\n";

    Person p1("Jack", "Bloggs");
    cout << "\t" << p1.ToString() << endl;

    Person p2("bob", "Bloggs");
    cout << "\t" << p2.ToString() << endl;

    Person p3("bob", "Bloggs");
    cout << "\t" << p2.ToString() << endl;

    cout << endl;

    return 0;
}