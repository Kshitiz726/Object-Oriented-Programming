#include <iostream>

using namespace std;

class Polygon {
public:
    Polygon(double length, double height) : length(length), height(height) {}
    virtual double area() const = 0; // Pure virtual function

    // Overloaded << operator for insertion
    friend ostream& operator<<(ostream& os, const Polygon& shape) {
        os << "Length: " << shape.length << ", Height: " << shape.height;
        return os;
    }

    // Overloaded >> operator for extraction
    friend istream& operator>>(istream& is, Polygon& shape) {
        is >> shape.length >> shape.height;
        return is;
    }

protected:
    double length;
    double height;
};

class Rectangle : public Polygon {
public:
    Rectangle(double length, double height) : Polygon(length, height) {}
    double area() const override {
        return length * height;
    }
};

class Triangle : public Polygon {
public:
    Triangle(double length, double height) : Polygon(length, height) {}
    double area() const override {
        return 0.5 * length * height;
    }
};

int main() {
    // Creating objects of Rectangle and Triangle classes
    Rectangle rectangle(0, 0);
    Triangle triangle(0, 0);

    // Input the values for Rectangle and Triangle objects using >>
    cout << "Enter the length and height for Rectangle: ";
    cin >> rectangle;
    cout << "Enter the length and height for Triangle: ";
    cin >> triangle;

    // Output the details and areas using <<
    cout << "Details of Rectangle: " << rectangle << endl;
    cout << "Area of Rectangle: " << rectangle.area() << endl;

    cout << "Details of Triangle: " << triangle << endl;
    cout << "Area of Triangle: " << triangle.area() << endl;

    return 0;
}
