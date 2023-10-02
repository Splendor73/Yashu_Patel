# Number Guessing Game

**+ Overview +**
- This is a simple C program for a number guessing game where players guess a number whose square root is provided. 
- The players are ranked on the leaderboard based on the number of guesses they made, and the leaders are persisted in a file.

**+ How to Play +**
- When prompted, press any key to start the game or 'q' to quit.
- Enter your name to start the game.
- You will be given the square root of a number, and your task is to guess the number.
- Input your guess. The guess should be a value between 10 and 100.
- If the guess is incorrect, you will be prompted to guess again. The game will give you a hint whether the guessed number is too high or too low.
- Once you've guessed the correct number, the game will inform you of the number of guesses you made and will update the leaderboard accordingly.

**+ Code Structure +**
- Struct Player: Represents a player with a name and a number representing the guesses made.
- Function GetGuess(): Responsible for getting a valid guess from the user.
- Function Game(): Implements the main logic of the game.
- Function sortLeaderboard(): Sorts the leaderboard in ascending order based on the number of guesses.
- Function main(): Orchestrates the game flow, reads and writes the leaderboard to a file, and handles user inputs.
  
**+ Important Notes +**
- The leaderboard is stored in #leadboard.txt, holding the names and scores of the top players.
- The program utilizes standard libraries like stdio.h, stdlib.h, time.h, and math.h to manage inputs/outputs, random numbers, and mathematical operations, respectively.
  
**+ Example +**

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// ... rest of your code ...

int main() {
    // ... main game loop ...
    
    return 0;
}

**+ Compilation +**

- To compile the program, you can use the following command (assuming gcc is installed):

< gcc game.c -o game >

- Here, game.c is the filename of your C code, and -lm links the math library. Run the generated executable game to play the game.

< ./game > 

