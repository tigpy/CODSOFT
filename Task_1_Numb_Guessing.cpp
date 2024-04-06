#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to Guess the Number Game!" << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << "\n\nTry to guess the number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << std::endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            cout << "------------------------------------------------------------------" << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
