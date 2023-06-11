#include <iostream>
#include <string>
#include "lab4_person.h"
using namespace std;

// void person:: get_user()
// {
//     cout << "Name: ";
//     cin >> name;
//     cout << " Age: ";
//     cin >> age;
// }
void person :: show_user(){
    cout << "Name: " <<  name;
    cout <<"Age : " << age;
  
}
// // person :: person(){ int a;} //defining default constructor using resolution operator
person :: person(string name_, int age_)
{
    age = age_;
    name = name_;
}

