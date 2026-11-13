/*Problem 1:  
In today’s digital world, secure passwords are essential to protect sensitive data. Weak passwords (like 
only numbers or only alphabets) are highly vulnerable to cyberattacks. A password checker is required 
to verify the strength of a password based on its composition. 
The program should read a password from the user and analyze its characters using a for loop. It must 
count uppercase letters, lowercase letters, digits, and special characters. Based on these counts, the 
program will determine if the password is Weak, Moderate, or Strong. 
Objectives: 
• To use a for loop to traverse each character of the password string. 
• To check and classify characters into: 
• Uppercase letters (A–Z) 
• Lowercase letters (a–z) 
• Digits (0–9) 
• Special characters (@, #, $, %, !, etc.) 
• To decide password strength based on composition rules. 
• To demonstrate practical use of loops in real-world cybersecurity applications. 
Password Strength Rules: 
➢ Weak: 
• Length < 6 OR contains only one type of character (e.g., only digits). 
➢ Moderate: 
• Length ≥ 6 AND contains at least two types of characters (e.g., letters + digits). 
➢ Strong: 
• Length ≥ 8 AND contains all four types (uppercase, lowercase, digits, special). 
Expected Outcome: 
➢ Program should count and display character categories. 
➢ Based on rules, display the password’s strength. 
➢ Should handle different test cases (weak, moderate, strong). */
#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Enter password: ";
    getline(cin, password);

    int upper = 0, lower = 0, digit = 0, special = 0,n=password.length();

    for (int i = 0; i < n; i++) {
        char ch = password[i];

        if (ch >= 'A' && ch <= 'Z') {
            upper++;
        }
        else if (ch >= 'a' && ch <= 'z') {
            lower++;
        }
        else if (ch >= '0' && ch <= '9') {
            digit++;
        }
        else {
            special++;
        }
    }

    int types = 0;
    if (upper > 0) types++;
    if (lower > 0) types++;
    if (digit > 0) types++;
    if (special > 0) types++;

    string strength;

    if (n < 6 || types == 1)
        strength = "Weak";
    else if (n >= 8 && types == 4)
        strength = "Strong";
    else if (n >= 6 && types >= 2)
        strength = "Moderate";
    else
        strength = "Weak";

    cout << "\nPassword Analysis:\n";
    cout << "Length: " << n << endl;
    cout << "Uppercase letters: " << upper << endl;
    cout << "Lowercase letters: " << lower << endl;
    cout << "Digits: " << digit << endl;
    cout << "Special characters: " << special << endl;
    cout << "Password Strength: " << strength << endl;

    return 0;
}
