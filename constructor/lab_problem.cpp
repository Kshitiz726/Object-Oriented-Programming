#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Student {
    private:
    string Name;
    int age;
    static int count;
    public:
    Student(string Name, int age) : Name(Name), age(age){Name = name; Age = age;count++;}; //initialising the student parameters with some count
    
    static int return_count()
    {
        return count;
    }
};

int Student::count = 0; //initialisation of count to 0
string a;
int b;
int main(void)
{
    // Student kshitiz = Student("kshitiz", 20);
    // Student Aditya = Student("aaditya", 20);
    // Student Lijan = Student("lijan", 20);
   string a = srand(2);
   cout << a;
  


    int count_final = Student::return_count();
    cout << count_final;
}