/* In an airline reservation system, when a family or group books tickets together, many
details (such as flight number and route) remain the same. Instead of re-entering all the details
for each passenger, the system can duplicate an existing ticket object.
You are required to design a class Ticket in C++ that demonstrates how a copy constructor
can be used to duplicate ticket details for multiple passengers in a group booking.
Class Design
• Data Members
o string passengerName
o string flightNumber
o string seatNumber
• Constructors
o Parameterized Constructor – initializes passenger details.
o Copy Constructor – duplicates an existing Ticket object.
• Member Function
o void displayTicket() – prints ticket details.
• Destructor
o Displays a message when a ticket object is destroyed (to track lifecycle).
Detailed Tasks
1. Create a primary ticket for the first passenger using the parameterized constructor.
2. Use the copy constructor to generate duplicate tickets for family/group members.
3. Modify only passenger name and seat number for new passengers (since flight number
remains the same).
4. Display all ticket details for the group.
5. Show how the destructor is called for each ticket object at the end of the program.*/

#include <iostream>
#include <string>
using namespace std;

class Ticket {
private:
    string passengerName;
    string flightNumber;
    string seatNumber;

public:
    // Parameterized Constructor
    Ticket(string name, string flight, string seat) {
        passengerName = name;
        flightNumber = flight;
        seatNumber = seat;

        cout << "Parameterized Constructor called for "
             << passengerName << endl;
    }

    // Copy Constructor
    Ticket(const Ticket &t) {
        passengerName = t.passengerName;
        flightNumber = t.flightNumber;
        seatNumber = t.seatNumber;

        cout << "Copy Constructor called for "
             << passengerName << endl;
    }

    // Function to modify passenger details
    void modifyDetails(string name, string seat) {
        passengerName = name;
        seatNumber = seat;
    }

    // Display Ticket Details
    void displayTicket() {
        cout << "\nPassenger Name : " << passengerName;
        cout << "\nFlight Number   : " << flightNumber;
        cout << "\nSeat Number     : " << seatNumber;
        cout << "\n-----------------------------";
    }

    // Destructor
    ~Ticket() {
        cout << "\nDestructor called for "
             << passengerName << endl;
    }
};

int main() {

    // Creating primary ticket
    Ticket t1("Rahul", "AI202", "A1");

    // Creating duplicate tickets using Copy Constructor
    Ticket t2(t1);
    Ticket t3(t1);
    Ticket t4(t1);

    // Modifying passenger name and seat number
    t2.modifyDetails("Priya", "A2");
    t3.modifyDetails("Amit", "A3");
    t4.modifyDetails("Neha", "A4");

    // Displaying all tickets
    cout << "\n\n===== GROUP BOOKING DETAILS =====\n";

    cout << "\nTicket 1:";
    t1.displayTicket();

    cout << "\n\nTicket 2:";
    t2.displayTicket();

    cout << "\n\nTicket 3:";
    t3.displayTicket();

    cout << "\n\nTicket 4:";
    t4.displayTicket();

    cout << "\n\n\nEnd of main function.\n";

    return 0;
}
