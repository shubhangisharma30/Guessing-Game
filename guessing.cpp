#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time
    int number = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;
    cout << "I'm thinking of a number between 1 and 100. Can you guess it?" << endl;
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if (guess > number) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < number) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != number);
    return 0;
}
