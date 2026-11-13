/*Q1. Design a function that calculates the area of a rectangle. You could define default values 
for the width and the height but still allow the caller to provide different values when needed. */
#include <iostream>
using namespace std;

int rectangleArea(int width = 10, int height = 10) {
    return width * height;
}

int main() {
    int a,b,n;
    cout<<"Enter '0' for your own value and '1' for Default Value";
    cin>>n;
    if(n==0){
    cout<<"Enter width of Rectangle\n";
    cin>>a;
    cout<<"Enter height of rectangle\n";
    cin>>b;
    cout<<"Rectangle Area: "<<rectangleArea(a,b)<<endl;}
    else{
        cout << "Default area: " << rectangleArea() << endl;
    }
    
    return 0;
}
