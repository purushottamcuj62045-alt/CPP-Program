/*. Implement namespace in a program to illustrate the use of same name variables and 
functions in different sections/libraries of the code.*/
#include<iostream>
using namespace std;
namespace luffy
{
 int x= 30;
}
using namespace luffy;
int main()
{
    int x {80};
    cout <<x<<endl ;
    cout<<luffy::x<<endl;
}