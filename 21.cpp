#include <iostream>
using namespace std;

class A;
class B;

class A {
    int value;
public:
    A(int v) : value(v) {}
    friend int findMax(A, B);
};

class B {
    int value;
public:
    B(int v) : value(v) {}
    friend int findMax(A, B);
};

int findMax(A a, B b) {
    return (a.value > b.value) ? a.value : b.value;
}

int main() {
    A a(10);
    B b(20);
    cout << "Maximum: " << findMax(a, b) << endl;
    return 0;
}
