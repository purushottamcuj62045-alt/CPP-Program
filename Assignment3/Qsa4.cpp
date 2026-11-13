/* Write a program that will overload a function Volume() to compute following operations: 
1. A cube (side) 
2. A cuboid (length, breadth, height) 
3. A sphere (radius)*/
#include <iostream>
using namespace std;

const double PI = 3.14159265358979;

int Volume(int side)
{
    return side * side * side;
}

double Volume(double length, double breadth, double height)
{
    return length * breadth * height;
}

double Volume(double radius)
{
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

int main()
{
    int choice;
    cout << "1. Cube\n2. Cuboid\n3. Sphere\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        int side;
        cout << "Enter side: ";
        cin >> side;
        cout << "Volume of cube = " << Volume(side) << endl;
    }
    else if (choice == 2)
    {
        double l, b, h;
        cout << "Enter length, breadth, height: ";
        cin >> l >> b >> h;
        cout << "Volume of cuboid = " << Volume(l, b, h) << endl;
    }
    else if (choice == 3)
    {
        double r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Volume of sphere = " << Volume(r) << endl;
    }
    else
    {
        cout << "Invalid choice" << endl;
    }

    return 0;
}