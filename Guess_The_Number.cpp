#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int checkValidGuess() {
    int guess;

    while (true)
    {
        cin >> guess;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Invalid input! Enter a number: ";
        }

        else if (guess < 1 || guess > 100)
        {
            cout << "Out of range! Enter a number between 1 - 100: ";
        }
        else {
            return guess;
        }
        
        
    }
    
}

int main() {
    srand(time(NULL));
    char answer;
    do {
        int numberToGuess = rand() % 100 + 1;
        int guess;
        int attempts = 0;
        bool guessIsCorrect = false;

        cout << "I'm thinking of a number between 1 and 100." << endl;

        while (!guessIsCorrect)
        {
            cout << "Enter your guess: ";
            guess = checkValidGuess();
            attempts++;

            if (guess > numberToGuess)
            {
                cout << "Too high!" << endl;
            }

            else if (guess < numberToGuess)
            {
                cout << "Too low!" << endl;
            }

            else {
                cout << "Correct! You guessed it" << endl;
                guessIsCorrect = true;
            }
            
        }
        
        cout << "Do you want to play again (Y/N) ?: ";
        cin >> answer;

    } while (answer == 'Y' || answer == 'y');
    
    return 0;
}