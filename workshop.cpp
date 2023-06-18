//can be invoked without creating the object for it, and inside the class -> static member function
//inside which value cant be modified -> constant member function
//FRIEND FUNCTION// declared inside the class, and defined outside it..

// #include <iostream>

// class Complex {
// private:
//     double real;
//     double imag;

// public:
//     Complex(double real, double imag) : real(real), imag(imag) {} //constructor, real(real) initialises real with passed parameter

//     double getReal() const {
//         return real;
//     }

//     double getImag() const {
//         return imag;
//     }

//     static void displayComplex(const Complex& complexNum) { //passing adress refrence 
//         std::cout << "Complex number: " << complexNum.getReal() << " + " << complexNum.getImag() << "i" << std::endl;
//     }
// };

// int main() {
//     Complex c1(3, 4);
//     Complex::displayComplex(c1);

//     return 0;
// }

// //constant member function vitra ko argument lai c#include <iostream>

// class Complex {
// private:
//     double real;
//     double imag;

// public:
//     Complex(double real, double imag) : real(real), imag(imag) {}

//     double getReal() const {
//         return real;
//     }

//     double getImag() const {
//         return imag;
//     }

//     static void displayComplex(const Complex& complexNum) {
//         std::cout << "Complex number: " << complexNum.getReal() << " + " << complexNum.getImag() << "i" << std::endl;
//     }
// };

// int main() {
//     Complex c1(3, 4);

// esailai , const Complex c1(3,4) gardine
//     Complex::displayComplex(c1);

//     return 0;
// }
//constant member function ma, kunai member ko value change garna mlldena



//TIME

// #include <iostream>

// class Time {
// private:
//     int hr;
//     int min;
//     int sec;

// public:
//     Time() : hr(12), min(0), sec(0) {}

//     Time(int totalSeconds) {
//         hr = totalSeconds / 3600;
//         totalSeconds %= 3600;
//         min = totalSeconds / 60;
//         sec = totalSeconds % 60;
//     }

//     Time(const Time& other) : hr(other.hr), min(other.min), sec(other.sec) {}

//     void displayTime() const {
//         std::cout << "Time: " << hr << " hr " << min << " min " << sec << " sec" << std::endl;
//     }
// };

// int main() {
//     // Using default constructor
//     Time t1;
//     t1.displayTime();

//     // Using parameterized constructor
//     int inputSeconds;
//     std::cout << "Enter the time in seconds: ";
//     std::cin >> inputSeconds;
//     Time t2(inputSeconds);
//     t2.displayTime();

//     // Using copy constructor
//     Time t3(t1);
//     t3.displayTime();

//     return 0;
// }

 //3///
#include <iostream>

class Complex {
private:
    double real;
    double imag;
    static int count;

public:
    Complex(double real, double imag) : real(real), imag(imag) {
        count++;
    }

    static int getTotalCount() {
        return count;
    }
};

int Complex::count = 0; // Initialization of static data member count

int main() {
    Complex c1(3, 4);
    Complex c2(5, 6);
    Complex c3(7, 8);

    int totalCount = Complex::getTotalCount();
    std::cout << "Total number of objects created: " << totalCount << std::endl;

    return 0;
}


#4

#include <iostream>
#include <cmath>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double real, double imag) : real(real), imag(imag) {}

    friend double calculateMagnitude(const Complex& complexNum);
};

double calculateMagnitude(const Complex& complexNum) {
    double magnitude = std::sqrt(complexNum.real * complexNum.real + complexNum.imag * complexNum.imag);
    return magnitude;
}

int main() {
    Complex c(3, 4);
    double magnitude = calculateMagnitude(c);
    std::cout << "Magnitude of the complex number: " << magnitude << std::endl;

    return 0;
}
