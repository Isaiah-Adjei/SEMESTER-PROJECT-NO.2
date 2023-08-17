#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    cout << "Welcome to Rock Paper Scissors!" << endl;
    cout << "Enter your choice: 1 (Rock), 2 (Paper), 3 (Scissors): ";
    
    int userChoice;
    cin >> userChoice;
    
    srand(time(0)); // Seed for random number generator
    int computerChoice = rand() % 3 + 1; // Generate random number between 1 and 3
    
    cout << "Computer choice: " << computerChoice << endl;
    
    cout << "Your choice: ";
    switch (userChoice) {
        case 1:
            cout << "Rock";
            break;
        case 2:
            cout << "Paper";
            break;
        case 3:
            cout << "Scissors";
            break;
        default:
            cout << "Invalid choice";
            return 1;
    }
    
    cout << " vs ";
    
    switch (computerChoice) {
        case 1:
            cout << "Rock";
            break;
        case 2:
            cout << "Paper";
            break;
        case 3:
            cout << "Scissors";
            break;
    }
    
    cout << endl;
    
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "Congratulations, you win!" << endl;
    } else {
        cout << "Computer wins, better luck next time!" << endl;
    }
    
    return 0;
}
