#include <iostream>
#include <string>
using namespace std;
class Account;
class Transaction
{
public:
    void deposit(Account &a, float amount);
    void withdraw(Account &a, float amount);
    void checkBalance(Account &a);
};

class Account
{
    string name;
    int accountNumber;
    float balance;

public:
    void InitializeData()
    {
        cout << "Enter account holder name: ";
        cin >> name;

        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter opening balance: ";
        cin >> balance;
    }

    void displayAccount()
    {
        cout << "\nAccount Holder Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs. " << balance << endl;
    }

    friend void Transaction::deposit(Account &a, float amount);
    friend void Transaction::withdraw(Account &a, float amount);
    friend void Transaction::checkBalance(Account &a);
};

void Transaction::deposit(Account &a, float amount)
{
    a.balance = a.balance + amount;

    cout << "Rs. " << amount << " deposited successfully." << endl;
    cout << "New balance: Rs. " << a.balance << endl;
}

void Transaction::withdraw(Account &a, float amount)
{
    if (amount <= a.balance)
    {
        a.balance = a.balance - amount;

        cout << "Rs. " << amount << " withdrawn successfully." << endl;
        cout << "New balance: Rs. " << a.balance << endl;
    }
    else
    {
        cout << "Insufficient balance." << endl;
    }
}

void Transaction::checkBalance(Account &a)
{
    cout << "Current balance: Rs. " << a.balance << endl;
}

int main()
{
    Account a;
    Transaction t;
    float amount;

    cout << "Enter account details" << endl;
    a.InitializeData();

    a.displayAccount();

    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    t.deposit(a, amount);

    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    t.withdraw(a, amount);

    cout << "\nBalance details" << endl;
    t.checkBalance(a);

    return 0;
}
