/*In a company, it is essential to track how many employees are currently active in the
system. Each time a new employee joins, the system should increase the employee count, and
when an employee leaves (or the object is destroyed), the count should decrease
automatically. You are required to design a class Employee in C++ that demonstrates how
static data members can be used to track the number of live objects in a program.
Class Design
• Data Members
o string name – Employee name
o int id – Employee ID
o static int employeeCount – Static counter for active employees
• Constructors
o Parameterized constructor – Initializes employee details and increments
employeeCount.
• Destructor
o Decrements employeeCount and displays a message indicating which
employee left.
• Member Function
o void displayEmployee() – Prints the employee’s name and ID.
o static void displayCount() – Prints the current number of active employees.
Detailed Tasks
1. Create several employee objects using the parameterized constructor.
2. Display the total number of active employees after each creation.
3. Destroy some employee objects (either manually or when they go out of scope).
4. Display the total number of active employees after destruction.
5. Demonstrate that the static counter is shared among all objects*/
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;

    static int employeeCount;

public:
    
    Employee(string n, int i) {
        name = n;
        id = i;
        employeeCount++;

        cout << "\nEmployee " << name << " joined.";
        displayCount();
    }
    void displayEmployee() {
        cout << "\nName: " << name;
        cout << "\nID: " << id << endl;
    }

  
    static void displayCount() {
        cout << "Active Employees: "
             << employeeCount << endl;
    }

   
    ~Employee() {
        employeeCount--;

        cout << "\nEmployee " << name << " left.";
        displayCount();
    }
};


int Employee::employeeCount = 0;

int main() {

    cout << "===== EMPLOYEE MANAGEMENT SYSTEM =====\n";

    Employee e1("Rahul", 101);
    Employee e2("Priya", 102);

    {
        Employee e3("Amit", 103);

        cout << "\nEmployee Details:\n";
        e1.displayEmployee();
        e2.displayEmployee();
        e3.displayEmployee();

        cout << "\nCurrent Employee Count:\n";
        Employee::displayCount();

    } 

    cout << "\nAfter e3 destruction:\n";
    Employee::displayCount();

    Employee e4("Luffy", 104);

    cout << "\nAfter creating e4:\n";
    Employee::displayCount();

    cout << "\n===== END OF PROGRAM =====\n";

    return 0;

} 
