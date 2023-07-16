#include <iostream>
using namespace std;

class complex {
 private:
    const double real;
    double imag;
 public:
    complex(double x, double y) : real(x) , imag(y){}
     //constant member function to return the real value
     double getReal() const{
        return real;
     }
     //normal function to return the imaginary value
     double getImag(){
        return imag;
     }

};

int main()
{
    complex complex_1(3.1, 4.2);
    cout << complex_1.getReal() << "+" << complex_1.getImag()<<"i";
    return 0;
}