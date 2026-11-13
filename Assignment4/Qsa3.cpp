#include <iostream>
using namespace std;
class DB;
class DM
{
private:
    float metres;
    float centimetres;

public:
    void getdata()
    {
        cout << "Enter distance in metres: ";
        cin >> metres;

        cout << "Enter distance in centimetres: ";
        cin >> centimetres;
    }

    void display()
    {
        cout << "Distance = " << metres << " metres "
             << centimetres << " centimetres" << endl;
    }

    friend DM addDistance(DM m, DB b);
};

class DB
{
private:
    float feet;
    float inches;

public:
    void getdata()
    {
        cout << "Enter distance in feet: ";
        cin >> feet;

        cout << "Enter distance in inches: ";
        cin >> inches;
    }

    void display()
    {
        cout << "Distance = " << feet << " feet "
             << inches << " inches" << endl;
    }

    friend DM addDistance(DM m, DB b);
};

DM addDistance(DM m, DB b)
{
    DM result;
    float totalCentimetres;
    float dbInCentimetres;

    dbInCentimetres = (b.feet * 30.48) + (b.inches * 2.54);

    totalCentimetres = (m.metres * 100) + m.centimetres + dbInCentimetres;

    result.metres = (int)totalCentimetres / 100;
    result.centimetres = (int)totalCentimetres % 100;

    return result;
}

int main()
{
    DM distanceInMetres, totalDistance;
    DB distanceInFeet;

    cout << "Enter distance in metres and centimetres" << endl;
    distanceInMetres.getdata();

    cout << "\nEnter distance in feet and inches" << endl;
    distanceInFeet.getdata();

    totalDistance = addDistance(distanceInMetres, distanceInFeet);

    cout << "\nTotal distance in metres and centimetres:" << endl;
    totalDistance.display();

    return 0;
}
