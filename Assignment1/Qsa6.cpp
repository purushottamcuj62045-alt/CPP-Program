/*WAP to demonstrate for, while, do-while (with all possible variations), like for loop 
can be demonstrated without giving initialization in for construct or without giving 
increment in for construct.  */
#include<iostream>
using namespace std;
int main()
{
    int x=8;
    for(int i =1;i<=10;i++)
    {
        cout<<x+i<<endl;
    }
    cout<<"============2nd Loop============";
    int j=0;
    for(;j<=11;j++) 
    {
        cout<<x+j+2<<endl;
    }  
    cout<<"3rd-Loop";
    int k=0;
    while(k<12)
    {
        cout<<k<<endl;
        k++;
    }

}