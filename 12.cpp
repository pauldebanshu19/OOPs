#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string accountNumber, accountHolderName;
    double balance;

public:
    BankAccount(string accNo, string accHolder, double bal) {
        accountNumber = accNo;
        accountHolderName = accHolder;
        balance = bal;
    }

    BankAccount(const BankAccount &acc) {
        accountNumber = acc.accountNumber;
        accountHolderName = acc.accountHolderName;
        balance = acc.balance;
    }

    void display() {
        cout << "Account Number: " << accountNumber << "\nAccount Holder: " << accountHolderName << "\nBalance: $" << balance << endl;
    }
};

int main() {
    BankAccount saving("SAV123", "Alice", 5000);
    BankAccount current(saving);  // Copy constructor
    
    cout << "Saving Account Details:\n";
    saving.display();

    cout << "\nCurrent Account Details (Copied from Saving):\n";
    current.display();

    return 0;
}
