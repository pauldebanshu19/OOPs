#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    Point() : x(0), y(0) {}

    Point(int xVal, int yVal) : x(xVal), y(yVal) {}

    Point(const Point &p) {
        x = p.x;
        y = p.y;
    }

    void getCoordinates() {
        cout << "Point(" << x << ", " << y << ")\n";
    }
};

int main() 
{
    Point p1;               
    Point p2(5, 10);          
    Point p3(p2);             
    
    cout << "Default Point: ";
    p1.getCoordinates();

    cout << "Parameterized Point: ";
    p2.getCoordinates();

    cout << "Copied Point: ";
    p3.getCoordinates();

    return 0;
}
