#include <iostream>
#include <iomanip>

using namespace std;

class Employee {
private:
    string name;
    double salary;
    int experience;

public:
    Employee(string n, double s, int e) 
    {
        name = n;
        salary = s;
        experience = e;
    }

    void setEmpRecords(string n, double s, int e) 
    {
        name = n;
        salary = s;
        experience = e;
    }

    void updateSalary()
     {
        if (experience > 5 && experience < 10) 
        {
            salary += 10000;
        } else if (experience > 10) 
        {
            salary += 20000;
        }
    }

    void getEmpRecords() 
    {
        cout << setw(10) << left << name << setw(10) << left << fixed << setprecision(2) << salary << endl;
    }
};

int main() 
{
    Employee emp1("John ", 50000, 7);
    Employee emp2("Jane ", 60000, 12);
    Employee emp3("Bob ", 40000, 3);

    emp1.updateSalary();
    emp2.updateSalary();
    emp3.updateSalary();

    cout << "Employee Records:" << endl;
    cout << "----------------" << endl;
    cout << setw(10) << left << "Name" << setw(10) << left << "Salary" << endl;
    cout << "----------------" << endl;

    emp1.getEmpRecords();
    emp2.getEmpRecords();
    emp3.getEmpRecords();

    return 0;
}