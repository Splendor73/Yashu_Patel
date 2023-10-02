
Number Guessing Game in C
Overview
This repository holds a simple C program for a number guessing game. In this game, players are challenged to guess a number based on the provided square root. Players are ranked on a leaderboard according to the number of guesses made, and the leaderboard is persisted in a file.

How to Play
Compile and Run the Program:

Once the program starts, press any key to initiate the game or 'q' to quit.
Enter Player Name:

Input your name to commence the game.
Guess the Number:

You will be provided with the square root of a number.
Your task is to guess this number, inputting a value between 10 and 100.
Game Flow:

If the guess is incorrect, you are prompted to guess again with hints whether the guessed number is too high or too low.
Upon guessing the correct number, the game informs you of the number of guesses made and subsequently updates the leaderboard.
Code Structure
Struct Player: Represents a player with a name and the number of guesses made.
Function GetGuess(): Responsible for obtaining a valid guess from the user.
Function Game(): Implements the core logic of the game.
Function sortLeaderboard(): Sorts the leaderboard in ascending order based on the number of guesses.
Function main(): Orchestrates the game flow, reads and writes the leaderboard to a file, and manages user inputs.
Important Notes
The leaderboard is stored in #leaderboard.txt, maintaining the names and scores of the top players.
The program utilizes standard libraries like <stdio.h>, <stdlib.h>, <time.h>, and <math.h> to manage inputs/outputs, random numbers, and mathematical operations respectively.
Example
c
Copy code
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    // ... main game loop ...
    return 0;
}
Compilation
To compile the program, you can use the following command (assuming gcc is installed):

sh
Copy code
gcc game.c -o game -lm
Here, game.c is the filename of your C code, and -lm links the math library. Run the generated executable game to play the game.

sh
Copy code
./game
Running the Game
Follow the on-screen prompts to input your name and guesses.
The game will declare when you have correctly guessed the number and will update the leaderboard accordingly.
Choose to replay or quit the game when prompted.
