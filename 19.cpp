#include <iostream>
using namespace std;

class Increment {
    int value;
public:
    Increment(int v = 0) : value(v) {}

    void display() {
        cout << "Value: " << value << endl;
    }

    // Pre-increment
    Increment& operator++() {
        ++value;
        return *this;
    }

    // Post-increment
    Increment operator++(int) {
        Increment temp = *this;
        ++value;
        return temp;
    }
};

int main() {
    Increment inc(5);
    ++inc;
    inc.display();
    inc++;
    inc.display();
    return 0;
}
