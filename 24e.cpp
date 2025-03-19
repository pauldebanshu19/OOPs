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

class Derived1 : public Base 
{
public:
    void show1() 
    {
        cout << "Derived1 class show" << endl;
    }
};

class Derived2 : public Base 
{
public:
    void show2() 
    {
        cout << "Derived2 class show" << endl;
    }
};

class Derived3 : public Derived1, public Derived2 
{
public:
    void show3() 
    {
        cout << "Derived3 class show" << endl;
    }
};

int main() 
{
    Derived3 d;
    d.show1();
    d.show2();
    d.show3();
    return 0;
}
