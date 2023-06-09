#include <iostream>
using namespace std;
class Employee {
public:
    string Name;
    string Company;
    int Age;
    //constructor has the same name as the class and has no return type

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;

    }
    void Introduce()
    {
        cout << "Name = " << Name <<endl;
        cout << "Company = " << Company <<endl;
        cout << "Age = " << Age <<endl;
    }

};

int main(void)
{
    //Employee1 is object of class named Employee here
    Employee Employee1 = Employee("Kshitiz", "Google", 20);

    Employee1::Introduce();
    
    //Just like members in structures in C, in C++, members are called as attributes 


}