#include <iostream>

class Design2; // Forward declaration of Design2 class

class Design1 {
public:
    int code;
    int qty;
    double price;

    // Constructor for Design1
    Design1(int code, int qty, double price) : code(code), qty(qty), price(price) {}

    // Conversion operator to convert Design1 to Design2
    //part1
    operator Design2() const;

    // Other member functions and data members can be defined here
};

class Design2 {
public:
    int code;
    double value;

    // Constructor for Design2
    Design2(int code, double value) : code(code), value(value) {}

    // Assignment operator to convert Design1 to Design2

    //part 2
    Design2& operator=(const Design1& d1) {
        code = d1.code;
        value = d1.qty * d1.price;
        return *this;
    }
};

//part 3
Design1::operator Design2() const {
    return Design2(code, qty * price);
}



int main() {
    Design1 D1(123, 5, 10.5);
    
    // Convert Design1 to Design2 using the conversion operator (inside the class)
    Design2 D2 = D1;

    // Display the contents of D1 and D2
    std::cout << "Design1: Code=" << D1.code << ", Qty=" << D1.qty << ", Price=" << D1.price << std::endl;
    std::cout << "Design2: Code=" << D2.code << ", Value=" << D2.value << std::endl;

    return 0;
}
