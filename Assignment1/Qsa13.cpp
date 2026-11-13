#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int numUsers;
    cout << "Enter number of users: ";
    cin >> numUsers;

    string names[numUsers];
    int units[numUsers];
    double charges[numUsers];

    for (int i = 0; i < numUsers; i++) {
        cout << "\nEnter name of user " << (i + 1) << ": ";
        cin.ignore();
        getline(cin, names[i]);

        cout << "Enter number of units consumed: ";
        cin >> units[i];

        double amount = 0.0;
        int u = units[i];

        if (u <= 100) {
            amount = u * 0.60;
        } else if (u <= 300) {
            amount = 100 * 0.60 + (u - 100) * 0.80;
        } else {
            amount = 100 * 0.60 + 200 * 0.80 + (u - 300) * 0.90;
        }

        if (amount < 50.0) {
            amount = 50.0;
        }

        if (amount > 300.0) {
            amount += amount * 0.15;
        }

        charges[i] = amount;
    }

    cout << "\n\n----------------------------------------------\n";
    cout << left << setw(20) << "Name" << setw(15) << "Units" << "Charges (Rs.)\n";
    cout << "----------------------------------------------\n";

    for (int i = 0; i < numUsers; i++) {
        cout << left << setw(20) << names[i]
             << setw(15) << units[i]
             << fixed << setprecision(2) << charges[i] << "\n";
    }

    cout << "----------------------------------------------\n";

    return 0;
}