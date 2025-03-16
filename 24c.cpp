#include <iostream>
using namespace std;

class Base1 
{
public:
    void display1() 
    {
        cout << "Base1 display" << endl;
    }
};

class Base2 
{
public:
    void display2() 
    {
        cout << "Base2 display" << endl;
    }
};

class Derived : public Base1, public Base2 
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
    d.display1();
    d.display2();
    d.show();
    return 0;
}
