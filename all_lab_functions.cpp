#include <iostream>
using namespace std;
int *roll;
char *name;
// functions of lab_function_overloading
int calcArea(int length = 10) // use of default arguement as mentioned in lab
{
    
 int area_1 = 6 * length * length ;
 return area_1;
}

float calcArea(float length , float breadth)
{
 float area_2 = length * breadth ;
 return area_2;
}

float calcArea(float radius)
{
 float area_3 = 3.14 * radius * radius;
 return area_3;
}



//functions of lab_dynamic_memory_allocation

void memory_allocation()
{
    roll = new int;
    name = new char[17];
}
void scan_user()
{
    cout << "roll : ";
    cin >> *(roll);
    cout << "Name: ";
    cin >> name;
}
void memory_deallocation()
{
    delete roll;
    delete  [] name;
}

void print_shits()
{
    cout << "Name : " << *(name);
    cout << "\n";
    cout << "Roll : " << *(roll);
    cout << "\n";
}