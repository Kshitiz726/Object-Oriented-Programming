#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

// Structure to store student information
struct Student {
    string name;
    string address;
    string program;
};

// Function to add a new student record to the file
void addStudentRecord(ofstream& file, const Student& student) {
    file << student.name << " | " << student.address << " | " << student.program << endl;
}

// Function to search and display student information by name
void displayStudentRecord(ifstream& file, const string& name) {
    string line;
    bool found = false;

    while (getline(file, line)) {
        size_t pos = line.find('|');
        string studentName = line.substr(0, pos);
        if (studentName == name) {
            found = true;
            cout << "Student Information for " << name << ":" << endl;
            cout << "Name: " << setw(20) << left << studentName;
            pos = line.find('|', pos + 1);
            string address = line.substr(pos + 2, line.find('|', pos + 1) - pos - 3);
            cout << "Address: " << setw(30) << left << address;
            pos = line.find('|', pos + 1);
            string program = line.substr(pos + 2);
            cout << "Program: " << program << endl;
            break;
        }
    }

    if (!found) {
        cout << "Student with name " << name << " not found." << endl;
    }
}

int main() {
    ofstream outFile("students.txt", ios::app); // File to store student records

    // Add some sample student records to the file
    Student s1 = {"Alice", "123 Main St, CityA", "Computer Science"};
    Student s2 = {"Bob", "456 Park Ave, CityB", "Engineering"};
    Student s3 = {"Ram", "789 Street Rd, CityC", "Mathematics"};

    addStudentRecord(outFile, s1);
    addStudentRecord(outFile, s2);
    addStudentRecord(outFile, s3);

    outFile.close();

    string searchName;
    cout << "Enter the name of the student you want to search for: ";
    cin >> searchName;

    ifstream inFile("students.txt");
    if (inFile.is_open()) {
        displayStudentRecord(inFile, searchName);
        inFile.close();
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}
