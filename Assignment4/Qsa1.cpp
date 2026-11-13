/*Design a C++ program for a Rectangle Geometry Application that demonstrates the use of friend 
functions. 
The program must satisfy the following requirements: 
Define a class Rectangle with the following private members and public member functions: 
• float length 
• float breadth 
• A getdata() function to initialize length and breadth. 
• A display() function to show the dimensions of the rectangle. 
create the following friend functions: 
1. float calculateArea(Rectangle r) – returns the area of a rectangle. 
2. float calculatePerimeter(Rectangle r) – returns the perimeter of a rectangle. 
3. Rectangle compareArea(Rectangle r1, Rectangle r2) – compares two rectangles and returns 
the rectangle with the larger area. 
Assume the rectangles represent plots of land in a real-estate system. The program should: 
1. Accept dimensions of two different plots (rectangles). 
2. Display the area and perimeter of each plot. 
3. Compare the plots and display which plot is larger in terms of area. 
4. If areas are equal, display that the plots are of the same size.*/
#include <iostream>
using namespace std;

class Rectangle {
    float length;
    float breadth;

public:
    void getdata() {
        cout << "Enter length and breadth of rectangle respectively:" << endl;
        cin >> length >> breadth;
    }

    void display() {
        cout << "Length of Rectangle: " << length << endl
             << "Breadth of Rectangle: " << breadth << endl;
    }

    friend float calculateArea(Rectangle r) {
        return r.length * r.breadth;
    }

    friend float calculatePerimeter(Rectangle r) {
        return 2 * (r.length + r.breadth);
    }

    // FIX 1: declared as a friend, not a member function
    friend Rectangle compareArea(Rectangle r1, Rectangle r2) {
        return (r1.length * r1.breadth >= r2.length * r2.breadth) ? r1 : r2;
    }
};

int main() {
    Rectangle r1, r2;

    r1.getdata();
    r1.display();
    r2.getdata();
    r2.display();

    cout << "Area of r1 = " << calculateArea(r1) << endl;
    cout << "Perimeter of r1 = " << calculatePerimeter(r1) << endl;
    cout << "Area of r2 = " << calculateArea(r2) << endl;
    cout << "Perimeter of r2 = " << calculatePerimeter(r2) << endl;

    float a1 = calculateArea(r1);
    float a2 = calculateArea(r2);

    if (a1 == a2) {
        cout << "Both Rectangles are of the same size." << endl;
    } else {
        Rectangle larger = compareArea(r1, r2);
        cout << (a1 > a2 ? "r1" : "r2") << " is larger in area.\n";
        cout << "Dimensions of the larger rectangle:\n";
        larger.display();
        cout << "Area = " << calculateArea(larger) << endl;
    }

    return 0;
}