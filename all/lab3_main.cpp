
#include <iostream>
#include "all_lab_functions.h"
using namespace std;
int choice, area_cube, length;
float area_rectangle, area_circle;
float length_1, breadth, radius ;
int main(void)

{

    cout << "Enter Choice: ";
    cout << "1: Cube ";
    cout << "2: Rectangle  ";
    cout << "3: Circle ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "length: ";
        cin >> length ;
        area_cube = calcArea(length);
        cout << "area is :" << area_cube;
        break;

    case 2:
    cout << "length: ";
        cin >> length_1 ;
        cout << "breadth: ";
        cin >> breadth ;
        area_rectangle = calcArea(length_1, breadth);
        cout << "area is :" << area_rectangle;
        break;
        
    
    case 3:
cout << "radius: ";
        cin >> radius ;
      area_circle = calcArea(radius);
      cout << "area is :" << area_circle;
      break;
    
    default:
        cout << "Invalid choice";

    }
}