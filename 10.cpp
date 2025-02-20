#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNumber;
    double marks;

public:
    Student() {
        name = "APJ Abdul Kalam";
        rollNumber = 1;
        marks = 100;
    }

    void display() {
        cout << "Name: " << name << "\nRoll Number: " << rollNumber << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.display();
    return 0;
}
