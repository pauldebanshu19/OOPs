#include <iostream>
#include <string>
using namespace std;

class Person 
{
    string name;
    int age;
    string address;
    
public:
    void setRecords(string n, int a, string addr) {
        name = n;
        age = a;
        address = addr;
    }
    
    void getRecords() {
        cout << "Name: " << name << "\nAge: " << age << "\nAddress: " << address << endl;
    }
};

int main() 
{
    Person p;
    p.setRecords("Debanshu", 19, "303 J6 Shapoorji Sukhobristi Complex");
    p.getRecords();
    return 0;
}
