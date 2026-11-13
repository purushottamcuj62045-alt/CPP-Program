#include <iostream>
using namespace std;

class BankAccount {
private:
    string holder;
    double balance;

    bool isValid(double amount) {
        return amount > 0 && amount <= 50000;
    }

    double interest() {
        return balance * 0.04;
    }

public:
    void setAccount(string h, double b) {
        holder = h;
        balance = b;
    }

    void deposit(double amount) {
        if (isValid(amount)) {
            balance += amount;
            cout << "Deposited " << amount << endl;
        } else {
            cout << "Invalid amount" << endl;
        }
    }

    void display() {
        cout << "\nHolder   : " << holder << endl;
        cout << "Balance  : " << balance << endl;
        cout << "Interest : " << interest() << endl;
    }
};

int main() {
    BankAccount acc;
    acc.setAccount("Ravi", 10000);

    acc.deposit(5000);
    acc.deposit(-200);

    acc.display();
    return 0;
}
