/*1. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent
toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps track of
the number of cars that have gone by, and of the total amount of money collected. Model this
tollbooth with a class called tollBooth. The two data items are a type unsigned int to hold the
total number of cars, and a type double to hold the total amount of money collected. A
constructor initializes both of these to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. Another function, called nopayCar(), increments
the car total but adds nothing to the cash total. Finally, a member function called display()
displays the two totals. Make appropriate member functions const.
Include a program to test this class. This program should allow the user to push one key to
count a paying car, and another to count a nonpaying car. Pushing the Esc key should cause the
program to print out the total cars and total cash and then exit.*/

#include <iostream>
#include <conio.h>
using namespace std;

class tollBooth
{
private:
    unsigned int totalCars;
    double totalCash;

public:
    tollBooth()
    {
        totalCars = 0;
        totalCash = 0.0;
    }

    void payingCar()
    {
        totalCars++;
        totalCash += 0.50;
    }

    void nopayCar()
    {
        totalCars++;
    }

    void display() const
    {
        cout << "\nTotal Cars: " << totalCars;
        cout << "\nTotal Cash: $" << totalCash << endl;
    }
};

int main()
{
    tollBooth booth;
    char ch;

    cout << "Press 1 for Paying Car";
    cout << "\nPress 2 for Non-Paying Car";
    cout << "\nPress ESC to Exit\n";

    while (true)
    {
        ch = getch();

        if (ch == '1')
        {
            booth.payingCar();
            cout << "\nPaying Car Counted";
        }
        else if (ch == '2')
        {
            booth.nopayCar();
            cout << "\nNon-Paying Car Counted";
        }
        else if (ch == 27)
        {
            booth.display();
            break;
        }
    }

    return 0;
}
