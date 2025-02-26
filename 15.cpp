#include <iostream>
#include <cmath> 

using namespace std;

class Shape 
{
private:
    double area;

public:
    
    void calculateArea(int side) {
        area = side * side;
        cout << "Area of Square: " << area << endl;
    }

    
    void calculateArea(int length, int width) {
        area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }

    
    void calculateArea(double radius) {
        area = M_PI * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }

    
    void calculateArea(int a, int b, int c) {
        
        double s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of Triangle: " << area << endl;
    }
};

int main() {
    Shape shape;

    shape.calculateArea(4);              
    shape.calculateArea(4, 5);           
    shape.calculateArea(3.0);            
    shape.calculateArea(3, 4, 5);        

    return 0;
}
