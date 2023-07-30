#pragma once
// #include <string>
#include <string>
using namespace std;

class person{
    public:
    string name;
    int age;
    
    //normally retreiving data without any constructor
    void get_user();
   
    void show_user();

    // person ();

    person(string name_, int age_);//parametrized constructor
    // person(person &a);
};