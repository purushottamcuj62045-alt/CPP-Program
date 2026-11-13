/*In real-world e-commerce or retail billing systems, customers purchase multiple items in a single 
transaction. The system must accept item prices one by one, calculate the total bill, and apply 
discounts if applicable. To simulate this scenario, we design a C++ program that repeatedly accepts 
item prices until the customer finishes shopping. 
The loop should continue asking for prices until the user enters 0, which indicates checkout. Using 
break and continue statements ensures flexible control of the loop, similar to real-world billing 
systems. 
Objectives: 
➢ To simulate a shopping cart system where multiple item prices are entered. 
➢ To use a for/while loop to repeatedly accept item prices. 
➢ To apply: 
o continue → skip invalid entries (like negative prices). 
o break → stop when user enters 0 (checkout). 
➢ To calculate the total bill and apply discounts if total exceeds a threshold. 
Discount Rule: 
• If total bill > ₹5000, apply 10% discount. 
• Otherwise, no discount. 
Expected Outcome: 
• Program should allow the user to keep adding item prices. 
• Negative prices should be ignored with a warning. 
• Entering 0 should stop input and calculate the final bill. 
• If applicable, discount should be applied automatically*/
#include<iostream>
using namespace std;
int main()
{
    int itprice,totalAmount=0;
    cout<<"Enter 0 to get Total amount\n";
    while(itprice!=0){
        cout<<"Enter Item price\n";
        cin>>itprice;
        if(itprice<0){
            cout<<"!Invalid Amount! Please enter valid amount\n";
        }
        else{
        totalAmount+=itprice;}
    }
    if (totalAmount>=5000){
        cout<<"10% discount applied\n";
        totalAmount=totalAmount-(totalAmount*0.10);
        cout<<"Total Amount to be paid:  "<<totalAmount;
    }
    else{
         cout<<"Total Amount to be paid:  "<<totalAmount;
    }
    return 0;
}