/*An election is contested by five candidates. The candidates are numbered 1 to 5 and 
the voting is done by marking the candidate number on the ballot paper. Write a 
program to read the ballots and count the votes cast for each candidate using an array 
variable count. In case, a number read is outside the range 1 to 5, the ballot should be 
considered as a ‘spoilt ballot’, and the program should also count the number of spoilt 
ballots.*/
#include <iostream>
using namespace std;

int main() {
    int count[6] = {0};   
    int spoilt = 0;
    int totalBallots, candidate;

    cout << "Enter total number of ballots: ";
    cin >> totalBallots;

    for (int i = 1; i <= totalBallots; i++) {
        cout << "Enter candidate number for ballot " << i << ": ";
        cin >> candidate;

        if (candidate >= 1 && candidate <= 5) {
            count[candidate]++;
        } else {
            spoilt++;
        }
    }

    cout << "\n----- Election Results -----\n";
    for (int i = 1; i <= 5; i++) {
        cout << "Candidate " << i << " : " << count[i] << " votes\n";
    }

    cout << "Spoilt ballots : " << spoilt << "\n";

    // Determine winner
    int maxVotes = count[1], winner = 1;
    for (int i = 2; i <= 5; i++) {
        if (count[i] > maxVotes) {
            maxVotes = count[i];
            winner = i;
        }
    }

    cout << "\nCandidate " << winner << " wins with " << maxVotes << " votes!\n";

    return 0;
}