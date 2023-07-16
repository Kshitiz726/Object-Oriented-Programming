#include <iostream>

using namespace std;
class complex{
private:
    double real;
    double imag;
    static int count;
public:
   //constructor
   complex(double x, double y) : real(x), imag(y){count++;};

   static void display_count()
   {
    cout << count;
   }
};
int complex::count = 0;
int main()
{
    //int complex::count = 0; 
    
    complex a(1,2);
    complex b(3,4);
    complex c(5 ,6);

    complex::display_count();
    return 0;
}