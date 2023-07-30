#include <iostream>
#include <string>
using namespace std;

class Course {
protected:
    string name;
    int credit_hours;

public:
    Course(string name, int credit_hours) : name(name), credit_hours(credit_hours) {}

    virtual void display_info() {
        cout << "Course Name: " << name << endl;
        cout << "Credit Hours: " << credit_hours << endl;
    }
};

class Mathematics : public Course {
public:
    Mathematics(string name, int credit_hours) : Course(name, credit_hours) {}

    // Override the display_info function
    void display_info() override {
        cout << "Mathematics Course Name: " << name << endl;
        cout << "Credit Hours: " << credit_hours << endl;
    }
};

class Science : public Course {
public:
    Science(string name, int credit_hours) : Course(name, credit_hours) {}
};

class Engineering : public Course {
public:
    Engineering(string name, int credit_hours) : Course(name, credit_hours) {}
};

class Physics : public Science {
public:
    Physics(string name, int credit_hours) : Science(name, credit_hours) {}

    // Override the display_info function
    void display_info() override {
        cout << "Physics Course Name: " << name << endl;
        cout << "Credit Hours: " << credit_hours << endl;
    }

    // Access overridden member from the base class
    void access_parent_info() {
        Course::display_info();
    }
};

class Chemistry : public Science {
public:
    Chemistry(string name, int credit_hours) : Science(name, credit_hours) {}
};

int main() {
    Mathematics math("Mathematics 101", 3);
    Science science("General Science", 4);
    Engineering engineering("Engineering Fundamentals", 5);
    Physics physics("Physics 201", 4);
    Chemistry chemistry("Chemistry 301", 3);

    cout << "*** Math Course Info ***" << endl;
    math.display_info();
    cout << endl;

    cout << "*** Physics Course Info ***" << endl;
    physics.display_info();
    cout << endl;

    cout << "*** Physics Accessing Parent Course Info ***" << endl;
    physics.access_parent_info();
    cout << endl;

    return 0;
}
