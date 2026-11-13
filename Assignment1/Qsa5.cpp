/* A library charges a fine for every book return late. For first 5 days the 
fine is 50 paisa, for 6-10 days fine is one rupee and above 10 days fine is 
5 rupees. If you return the book after 30 days your membership will be 
cancelled. WAP to accept no. of days the member is late to return the 
book and display the fine or appropriate message.  
*/
#include <iostream>
using namespace std;
int main()
{
    int nod,fine;
    cout<<"Enter number of days";
    cin>>nod;
    bool cond1 = nod<=5;
    bool cond2 = nod >5 && nod<=10;
    bool cond3 = nod>=30;
    if (cond1){
    fine = 5;
    cout<<"Your fine is rupee :"<<fine ;}
    else if(cond2){
    fine = 5;
    cout<<"Your fine is rupee:"<<fine ;}
    else if(cond3)
    {
        cout<<"Your membership is cancelled";
    }
    return 0;

}