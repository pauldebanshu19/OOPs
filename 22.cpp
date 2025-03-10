#include <iostream>
using namespace std;

class Converter {
    int decimal;
public:
    Converter(int d) : decimal(d) {}

    friend void convertToBinary(Converter);
};

void convertToBinary(Converter c) {
    int num = c.decimal;
    string binary = "";
    while (num > 0) {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }
    cout << "Binary: " << binary << endl;
}

int main() {
    Converter c(10);
    convertToBinary(c);
    return 0;
}
