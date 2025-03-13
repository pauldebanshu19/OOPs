#include <iostream>
using namespace std;

class Digital;

class Analog 
{
public:
    void convertDigitalToAnalog(const Digital& d);
};

class Digital 
{
    int hours, minutes;
public:
    Digital(int h, int m) : hours(h), minutes(m) {}

    friend void Analog::convertDigitalToAnalog(const Digital& d);
};

void Analog::convertDigitalToAnalog(const Digital& d) 
{
    cout << "Analog Time: " << d.hours % 12 << ":" << d.minutes << " " << (d.hours >= 12 ? "PM" : "AM") << endl;
}

int main() 
{
    Digital d(14, 30);
    Analog a;
    a.convertDigitalToAnalog(d);
    return 0;
}
