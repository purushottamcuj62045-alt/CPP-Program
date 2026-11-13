/*Differentiate between private and public access/scope. Perform the question no. 5 
with structure having the data member in private scope. Students should be able to  
a) differentiate between structure  in C vs structure in C++ */
#include<iostream>
#include<string>
using namespace std;
struct student{
private:
    string name;
    int roll_no;
    string degree;
    string hostel;
    float current_cgpa;

public:

    void add_details()
    {
        cout<<"\nEnter Your Name:";
        cin.ignore();
        getline(cin,name);
         
        cout<<"\nEnter your roll no:";
        cin>>roll_no;

        cout<<"\nENter your Degree:";
        cin.ignore();
        getline(cin,degree);

        cout<<"\nEnter your Hostel:";
        cin.ignore();
        getline(cin,hostel);

        cout<<"Enter your current cgpa";
        cin>>current_cgpa;
    }
    void updateDetails(){
        cout<<"\nUpdating the details of "<<roll_no;

        cout<<"\nEnter new name:"<<name;
        cin.ignore(); 
        getline(cin,name);

        cout<<"\nEnter Updated Degree";
        cin.ignore();
        getline(cin,degree);
    
    }
    void updateCgpa()
    {
        cout<<"\nUpdating CGPA of "<<roll_no;

        cout<<"\nEnter updated CGPA";
        cin>>current_cgpa;
    }
    void updateResidenceInfo()
    {
        cout<<"\n Updating Residence info of"<<hostel;

        cout<<"\nEnter New Residence info";
        cin.ignore();
        getline(cin,hostel);

    }
    void displaydetails()
    {
        cout<<"\nStudent's Name:"<<name;
        cout<<"\nRoll_No"<<roll_no;
        cout<<"\nDegree:"<<degree;
        cout<<"\nResidence:"<<hostel;
        cout<<"\nCGPA:"<<current_cgpa;
    }
};
int main()
{
    student s1;    int choice;

    s1.add_details();
    s1.displaydetails();

    do {
        cout << "\n----- Menu -----\n";
        cout << "1. Update Details (Name/Degree)\n";
        cout << "2. Update CGPA\n";
        cout << "3. Update Residence Info (Hostel)\n";
        cout << "4. Display Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s1.updateDetails();
                break;
            case 2:
                s1.updateCgpa();
                break;
            case 3:
                s1.updateResidenceInfo();
                break;
            case 4:
                s1.displaydetails();
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
/*The key difference between this program and earlier one is that i had made stuct private such that roll no can only change by using function(updateDetails),we can't directly assign the value in function.*/

