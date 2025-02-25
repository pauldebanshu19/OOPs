#include <iostream>
using namespace std;

class Addition {
public:
    int findAddition(int a, int b) {
        return a + b;
    }

    int findAddition(int a, int b, int c) {
        return a + b + c;
    }

    double findAddition(double a, double b) {
        return a + b;
    }

    double findAddition(double a, double b, double c) {
        return a + b + c;
    }
};

int main() {
    Addition add;
    cout << "Sum of 2 integers: " << add.findAddition(10, 20) << endl;
    cout << "Sum of 3 integers: " << add.findAddition(10, 20, 30) << endl;
    cout << "Sum of 2 doubles: " << add.findAddition(1.1, 2.2) << endl;
    cout << "Sum of 3 doubles: " << add.findAddition(1.1, 2.2, 3.3) << endl;
    
    return 0;
}
