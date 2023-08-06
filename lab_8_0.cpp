#include <iostream>

using namespace std;

class Polygon {
public:
    Polygon(double length, double height) : length(length), height(height) {}
    virtual double area() const = 0; // Pure virtual function

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
    Rectangle rectangle(5, 10);
    Triangle triangle(4, 6);

    // Calculating and displaying the areas of the shapes
    cout << "Area of Rectangle: " << rectangle.area() << endl;
    cout << "Area of Triangle: " << triangle.area() << endl;

    return 0;
}
