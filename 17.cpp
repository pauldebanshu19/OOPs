#include <iostream>
#include <cmath>
using namespace std;

class Polar {
    float radius, angle;
public:
    Polar(float r = 0, float a = 0) : radius(r), angle(a) {}

    void getValue() {
        cout << "Enter radius and angle: ";
        cin >> radius >> angle;
    }

    void display() {
        cout << "Radius: " << radius << ", Angle: " << angle << endl;
    }

    Polar operator+(Polar const& p) {
        float x1 = radius * cos(angle);
        float y1 = radius * sin(angle);
        float x2 = p.radius * cos(p.angle);
        float y2 = p.radius * sin(p.angle);
        float x = x1 + x2;
        float y = y1 + y2;
        float r = sqrt(x * x + y * y);
        float a = atan2(y, x);
        return {r, a};
    }
};

int main() {
    Polar p1, p2, result;
    p1.getValue();
    p2.getValue();
    result = p1 + p2;
    result.display();
    return 0;
}
