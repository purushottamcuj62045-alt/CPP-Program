#include <iostream>
using namespace std;
int main()
{
    /*WAP to calculate gross salary of a person, where gross_salary = basic+da+ta+HRA and 
da is 46% of basic and ta is 8% of basic and HRA is 9% of basic pay.*/
int basic;
cout<<"Enter Basic salary";
cin>>basic;
float Gross;
Gross= basic+(0.46*basic)+(0.08*basic)+(0.09*basic);
cout<<"gross Salary"<<Gross;
return 0;
}