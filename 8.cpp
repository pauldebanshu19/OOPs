#include <iostream>
#include <iomanip> 

using namespace std;

class Student {
private:
    int roll;
    string name;
    int marks[3];
    int totalMarks;
    int avgMarks;

public:
    void setDetails(int r, string n, int m[]) 
    {
        roll = r;
        name = n;
        for (int i = 0; i < 3; i++) 
        {
            marks[i] = m[i];
        }
    }

    void compute() {
        totalMarks = 0;
        for (int i = 0; i < 3; i++) {
            totalMarks += marks[i];
        }
        avgMarks = totalMarks / 3;
    }

    void getDetails() 
    {
        cout << setw(10) << roll 
             << setw(15) << name 
             << setw(10) << marks[0] 
             << setw(10) << marks[1] 
             << setw(10) << marks[2] 
             << setw(15) << totalMarks 
             << setw(15) << avgMarks << endl;
    }
};

int main() {
    Student students[3]; 
    int roll;
    string name;
    int marks[3];

    for (int i = 0; i < 3; i++) 
    {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Roll number: ";
        cin >> roll;
        cout << "Name: ";
        cin >> name;
        cout << "Enter marks for 3 subjects: ";
        for (int j = 0; j < 3; j++) 
        {
            cin >> marks[j];
        }
        students[i].setDetails(roll, name, marks);
        students[i].compute();
        cout << endl;
    }

    cout << setw(10) << "Roll" 
         << setw(15) << "Name" 
         << setw(10) << "Physics" 
         << setw(10) << "Maths" 
         << setw(10) << "Chemistry" 
         << setw(15) << "Total Marks" 
         << setw(15) << "Average Marks" << endl;

    for (int i = 0; i < 3; i++) 
    {
        students[i].getDetails();
    }

    return 0;
}
