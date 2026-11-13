/*Raising a number n to a power p is the same as multiplying n by itself p times. Write a 
function called power() that takes a double value for n and an int value for p, and returns the 
result as a double value. Use a default argument of 2 for p, so that if this argument is omitted, 
the number n will be squared. Write a main() function that gets values from the user to test this 
function.*/
#include <iostream>
using namespace std;

double power(double n, int p = 2);

int main()
{
    double number, answer;
    int exponent;

    cout << "Enter base number: ";
    cin >> number;
    cout << "Enter power: ";
    cin >> exponent;

    answer = power(number, exponent);
    cout << number << " to the power " << exponent << " is " << answer << endl;

    cout << number << " squared is " << power(number) << endl;

    return 0;
}

double power(double n, int p)
{
    double result = 1.0;
    for (int i = 0; i < p; i++)
        result *= n;
    return result;
}