/*Write a program to define function cube() as inline for calculating cube. */
#include<iostream>
using namespace std;
inline int cube(int n){
    return n*n*n;
};
int main(){
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;
    cout<<"Cube of Number"<<cube(num)<<endl;
    return 0;
    
}