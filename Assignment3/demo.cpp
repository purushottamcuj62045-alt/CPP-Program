/*#include<iostream>
using namespace std;
class student{
private:
int age;
string name;
public:
void getdata(){
cout<<"Enter name of student:\n";
cin.ignore();
getline(cin,name);
cout<<"Enter age :\n";
cin>>age;
};
int prin{
    cout<<"Name"<<name;
    cout<<"Age"<<age;
};
};*/
#include <iostream>
using namespace std;

class Demo {
    int x, y;

public:
    Demo(int a = 0, int b = 0) : x(a), y(b) {}

    void show(const char *name) const {
        cout << name << " -> x = " << x << ", y = " << y << endl;
    }
};

// Objects passed BY VALUE - function works on copies
void swapByValue(Demo a, Demo b) {
    Demo temp = a;
    a = b;
    b = temp;

    cout << "Inside swapByValue (the copies): " << endl;
    a.show("  a");
    b.show("  b");
}

// Objects passed BY REFERENCE - function works on the originals
void swapByRef(Demo &a, Demo &b) {
    Demo temp = a;
    a = b;
    b = temp;
}

int main() {
    Demo d1(10, 20), d2(30, 40);

    cout << "Original objects:" << endl;
    d1.show("  d1");
    d2.show("  d2");

    cout << "\n--- Calling swapByValue(d1, d2) ---" << endl;
    swapByValue(d1, d2);

    cout << "Back in main after swapByValue:" << endl;
    d1.show("  d1");
    d2.show("  d2");

    cout << "\n--- Calling swapByRef(d1, d2) ---" << endl;
    swapByRef(d1, d2);

    cout << "Back in main after swapByRef:" << endl;
    d1.show("  d1");
    d2.show("  d2");

    return 0;
}
