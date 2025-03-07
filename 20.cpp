#include <iostream>
using namespace std;

class Data {
    int value;
public:
    friend ostream& operator<<(ostream& out, const Data& d) {
        out << "Value: " << d.value;
        return out;
    }

    friend istream& operator>>(istream& in, Data& d) {
        cout << "Enter value: ";
        in >> d.value;
        return in;
    }
};

int main() {
    Data d;
    cin >> d;
    cout << d << endl;
    return 0;
}
