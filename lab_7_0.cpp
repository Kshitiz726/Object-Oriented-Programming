#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Student{
protected: 
    string name;
    int roll_number;
    string course;
public:
 Student(string name, int roll_number, string course): name(name), roll_number(roll_number), course(course){}

  void display_info() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Course: " << course << endl;
    }
};

class Test: public Student{
    protected:
    vector<int> marks;
    public:
    Test(string name, int roll_number, string course, vector<int> marks) :  Student(name, roll_number, course), marks(marks) {}
    int calculate_total_marks() {
        int total = 0;
        for (int mark : marks) { //range based for loop, which assigns the marks vector data in mark variable 
            total += mark;
        }
        return total;
    }
     void display_marks() {
        cout << "Marks obtained in each subject:" << endl;
        for (int i = 0; i < marks.size(); i++) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }

};

class Result : public Test{
    public:
    Result(string name, int roll_number, string course, vector<int> marks): Test(name, roll_number, course, marks) {}


    void display_result() {
        display_info();
        display_marks();
        int total_marks = calculate_total_marks();
        cout << "Total Marks Obtained: " << total_marks << endl;
    }
};
int main(){
    string name, course;
   int roll_number;
    vector<int> marks;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter roll number: ";
    cin >> roll_number;
    

    cout << "Enter course: ";
    cin >> course;

    for (int i = 0; i < 5; i++) { // Assuming 5 subjects in the test
        int mark;
        cout << "Enter marks obtained in subject " << i + 1 << ": ";
        cin >> mark;
        marks.push_back(mark);
    }

    // Create Result object
    Result result(name, roll_number, course, marks);

    // Display the result
    cout << "\n*** Result ***" << endl;
    result.display_result();

    return 0;
}