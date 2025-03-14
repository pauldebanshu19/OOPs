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

class Derived : public Base 
{
public:
    void show() 
    {
        cout << "Derived class show" << endl;
    }
};

int main() 
{
    Derived d;
    d.display();
    d.show();
    return 0;
}
