#include <iostream>
using namespace std;

class Base 
{
public:
    void display() 
    {
        cout << "Base class display" << endl;
    }
};

class Intermediate : public Base 
{
public:
    void show() 
    {
        cout << "Intermediate class show" << endl;
    }
};

class Derived : public Intermediate 
{
public:
    void displayDerived() 
    {
        cout << "Derived class display" << endl;
    }
};

int main() 
{
    Derived d;
    d.display();
    d.show();
    d.displayDerived();
    return 0;
}
