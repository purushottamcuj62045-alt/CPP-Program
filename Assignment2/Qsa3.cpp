/*Problem 3: 
In real-world traffic management, signals are crucial to ensure road safety and regulate the flow of 
vehicles. Drivers must respond appropriately to the traffic light color. The problem is to design a 
program in C++ that simulates a traffic signal and provides instructions to the driver based on the signal 
color entered. 
Objective: 
• To develop a C++ program that takes the traffic signal color (Red, Yellow, or Green) as 
input. 
• To implement decision control statements (if, else-if, else) for decision-making. 
• To display the corresponding driving instruction: 
➢ Red → Stop 
➢ Yellow → Get Ready 
➢ Green → Go 
• To handle invalid input using proper validation. 
Expected Outcome: 
• The program should correctly identify the input signal color and display the respective 
driving instruction. 
• If the input is invalid (not Red, Yellow, or Green), the program should display an error 
message. 
• The output should simulate a real-world traffic light system by guiding the driver’s 
action.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string signal;
    cout << "Enter traffic signal color (Red/Yellow/Green): ";
    cin>>signal;
    int leng=signal.length();

    for (int i = 0; i<leng; i++) {
        if (signal[i] >= 'A' && signal[i] <= 'Z') {
            signal[i] = signal[i] + 32;
        }
    }

    if (signal == "red") {
        cout << "Signal: RED -> Stop" << endl;
    }
    else if (signal == "yellow") {
        cout << "Signal: YELLOW -> Get Ready" << endl;
    }
    else if (signal == "green") {
        cout << "Signal: GREEN -> Go" << endl;
    }
    else {
        cout << "Invalid signal color entered! Please enter Red, Yellow, or Green." << endl;
    }

    return 0;
}