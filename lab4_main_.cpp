#include <iostream>
using namespace std;
class person {
    private:
 int Age;
public:
    string Name;
    
    
    //constructor has the same name as the class and has no return type

    person(string name, int age)
    {
        Name = name;
        Age = age;

    }
    void Introduce()
    {
        cout << "Name = " << Name <<endl;
        
        cout << "Age = " << Age <<endl;
        // cout << "Number = " << number <<endl;
    }
    void set_data(int a)
    {
        Age = a;
    }
    int get_data()
    {
        return Age;
        
    }


};

int main(void)
{
    //Employee1 is object of class named Employee here
    person person1 = person("Kshitiz",20);

    person1.Introduce();
    
    //Just like members in structures in C, in C++, members are called as attributes 

    person1.set_data(2);
    person1.get_data();
    person1.Introduce();
}