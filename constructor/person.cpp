#include <iostream>
#include "Person.hpp"
using namespace std;

void Person::printdata()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age;
    cout << "Roll: " << roll;
}

Person::Person(int a, string b)
{
    age = a;
    name = b;

}

Person::Person(int a)
{
    roll = a;
}

// Person::roshan()
// {
//     cout << "PRIVATE!! ";
// }