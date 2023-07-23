#include <iostream>
#include <cmath> 
using namespace std;
class complex{
private:
    double real;
    double imag;
public: 
//constructor to construct the object of class complex
    complex (double real, double imag) : real(real) , imag(imag) {};
    friend double magnitude (const complex& c); //const, to ensure nothing is changed inside
};

double magnitude (const complex& c){
     return sqrt(c.real * c.real + c.imag * c.imag);
}
int main()
{
    complex c1(3,4);
    cout << magnitude(c1);
    return 0;

}