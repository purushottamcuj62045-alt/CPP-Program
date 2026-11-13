#include <iostream>
#include <string>
#include <limits>
using namespace std;

class student {
private:
    string name;
    int roll_Number;
    float marks[10];
    int n;

public:
    student() : roll_Number(0), n(0) {
        for (int i = 0; i < 10; i++) {
            marks[i] = 0.0f;
        }
    }

    void input() {
        cout << "Enter student name\n";
        getline(cin >> ws, name);

        cout << "Enter student's roll number\n";
        while (!(cin >> roll_Number)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Enter roll number again\n";
        }

        cout << "Enter the number of subjects (1-10)\n";
        while (!(cin >> n) || n < 1 || n > 10) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter a number between 1 and 10\n";
        }

        for (int i = 0; i < n; i++) {
            cout << "Enter marks of subject " << i + 1 << endl;
            while (!(cin >> marks[i])) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Enter marks again\n";
            }
        }
    }

    float avg() const {
        float sum = 0.0f;
        for (int i = 0; i < n; i++) {
            sum += marks[i];
        }
        return (n > 0) ? sum / n : 0.0f;
    }

    char cal_Grade() const {
        float average = avg();
        if (average >= 90)      return 'A';
        else if (average >= 80) return 'B';
        else if (average >= 70) return 'C';
        else if (average >= 60) return 'D';
        else                    return 'E';
    }

    void display() const {
        cout << "\n=========== Details of Student ===========" << endl;
        cout << "Name          : " << name << endl;
        cout << "Roll number   : " << roll_Number << endl;
        cout << "Average marks : " << avg() << endl;
        cout << "Grade         : " << cal_Grade() << endl;
        cout << "==========================================" << endl;
    }
};

int main() {
    student det;
    det.input();
    det.display();
    return 0;
}