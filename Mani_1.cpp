#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

string getChoiceName(int choice) {
    switch(choice) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Invalid";
    }
}

int main() {
    int userChoice, computerChoice;

    // Seed random number generator
    srand(time(0));

    cout << "===== Welcome to Rock-Paper-Scissors Game =====\n";
    cout << "1. Rock\n2. Paper\n3. Scissors\n";

    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    // Generate computer's choice randomly (1 to 3)
    computerChoice = rand() % 3 + 1;

    cout << "\nYou chose: " << getChoiceName(userChoice) << endl;
    cout << "Computer chose: " << getChoiceName(computerChoice) << endl;

    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a Draw!\n";
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You Win!\n";
    } else {
        cout << "Computer Wins!\n";
    }

    return 0;
}
