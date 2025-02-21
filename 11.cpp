#include <iostream>
#include <string>
using namespace std;

class Book {
    string title, author;
    double price;

public:
    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }

    void display() {
        cout << "Title: " << title << "\nAuthor: " << author << "\nPrice: $" << price << endl;
    }
};

int main() {
    string title, author;
    double price;

    cout << "Enter book title: ";
    getline(cin, title);
    cout << "Enter author name: ";
    getline(cin, author);
    cout << "Enter price: ";
    cin >> price;

    Book b(title, author, price);
    b.display();

    return 0;
}
