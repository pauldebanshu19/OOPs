#include <iostream>
#include <string>
using namespace std;
class BankAccount 
{
private:
    int accountNumber;
    string accountHolderName;
    float balance;
public:
    BankAccount(int accNo, string name, float bal) 
    {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
        cout << "BankAccount created for " << accountHolderName << " with Account Number: " << accountNumber << endl;
    }
    ~BankAccount() {
        cout << "BankAccount with Account Number " << accountNumber << " is being closed." << endl;
    }
    void deposit(float amount) 
    {
        if (amount > 0) {
            balance += amount;
            cout << "Amount " << amount << " deposited successfully!" << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient funds! Withdrawal failed." << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else {
            balance -= amount;
            cout << "Amount " << amount << " withdrawn successfully!" << endl;
        }
    }
    void displayAccountDetails() const 
    {
        cout << "\nAccount Number: " << accountNumber
             << "\nAccount Holder Name: " << accountHolderName
             << "\nBalance: " << balance << endl;
    }
};
int main() 
{
    int accountNumber;
    string accountHolderName;
    float initialBalance;
    cout << "Enter Account Number: ";
    cin >> accountNumber;
    cin.ignore(); 
    cout << "Enter Account Holder Name: ";
    getline(cin, accountHolderName);
    cout << "Enter Initial Balance: ";
    cin >> initialBalance;
    BankAccount account(accountNumber, accountHolderName, initialBalance);
    float depositAmount, withdrawAmount;
    cout << "\nEnter amount to deposit: ";
    cin >> depositAmount;
    account.deposit(depositAmount);
    cout << "\nEnter amount to withdraw: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);
    cout << "\nAccount details after transactions:";
    account.displayAccountDetails();
    return 0; 
}
