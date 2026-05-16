## Number Guessing Game

### Project Brief
This is a simple number guessing game I built on C++, where the user guesses a random number between 1 and 100. 
If their guess is greater or lower than the random number the program prints out a message, till the correct number is guessed.

### Languages and Libraries Used
  - C++ 11 or newer
  - Libraries
    - `<iostream>`
    - `<stdlib.h>`
    - `<cstdlib>`
    - `<ctime>`

### Features
  - Random number generation (1 - 100)
  - Input validation (handles letters and out of range numbers)
  - Has an attempt counter
  - Feedback on user's number ("Too high" / "Too low")
  - Play again option

### How to Launch the Program
  1. Download and save the Guess_The_Number.cpp file from this repo to your computer
  2. Open the file in a terminal or your preferred code editor
  3. Compile the code:
       - `g++ Guess_The_Number.cpp -o guessing_game`
  4. Run the program:
       - `macOS: ./guessing_game`
       - `Windows: guessing_game.exe`
