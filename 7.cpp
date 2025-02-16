#include <iostream>
using namespace std;

class Rectangle 
{
    int length, width;

public:
    void setData(int l, int w) {
        length = l;
        width = w;
    }

    void getData() {
        cout << "Length: " << length << "\nWidth: " << width << endl;
    }

    int findArea() {
        return length * width;
    }

    int findPerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect;
    rect.setData(5, 10);
    rect.getData();
    cout << "Area: " << rect.findArea() << "\nPerimeter: " << rect.findPerimeter();
    return 0;
}
