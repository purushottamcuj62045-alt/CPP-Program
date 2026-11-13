/*A certain grade of steel is graded according to the following conditions:  
(i) Hardness must be greater than 50  
(ii) Carbon content must be less than 0.7  
(iii) Tensile strength must be greater than 5600  
The grades are as follows:  
Grade is 10 if all three conditions are met  
Grade is 9 if all conditions (i) and (ii) are met  
Grade is 8 if all conditions (ii) and (iii) are met  
Grade is 7 if all conditions (i) and (iii) are met  
Grade is 6 if only one condition is met  
Grade is 5 if none of the conditions are met  */
#include <iostream>
using namespace std;

int main()
{
    double hardness, carbon, tensile;
    cout << "Enter hardness: ";
    cin >> hardness;
    cout << "Enter carbon content: ";
    cin >> carbon;
    cout << "Enter tensile strength: ";
    cin >> tensile;

    bool cond1 = hardness > 50;
    bool cond2 = carbon < 0.7;
    bool cond3 = tensile > 5600;

    int grade;

    if (cond1 && cond2 && cond3)
        grade = 10;
    else if (cond1 && cond2)
        grade = 9;
    else if (cond2 && cond3)
        grade = 8;
    else if (cond1 && cond3)
        grade = 7;
    else if (cond1 || cond2 || cond3)
        grade = 6;
    else
        grade = 5;

    cout << "Grade of the steel: " << grade << endl;

    return 0;
}