#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor called." << endl;
    }

    ~Base() {
        cout << "Base destructor called." << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor called." << endl;
    }

    ~Derived() {
        cout << "Derived destructor called." << endl;
    }
};

int main() {
    cout << "Creating Derived object:" << endl;
    Derived derived_obj;

    cout << "\nDestroying Derived object:" << endl;

    return 0;
}
