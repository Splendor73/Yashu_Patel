## Number Guessing Game in C

### Overview
This repository contains a simple C program for a number guessing game. In this game, players are provided the square root of a number and tasked with guessing the original number. Players are ranked on the leaderboard based on the number of correct guesses they make, and the leaderboard is persisted in a file.

### How to Play
1. **Start the Game:**
   - Compile and run the program. Press any key to initiate the game or 'q' to quit.
2. **Enter Player Name:**
   - Input your name to commence the game.
3. **Guess the Number:**
   - You will be provided with the square root of a number.
   - Your task is to guess this number, which should be a value between 10 and 100.
4. **Game Flow:**
   - If the guess is incorrect, you will be prompted to guess again.
   - Hints will be provided whether the guessed number is too high or too low.
   - Upon guessing the correct number, the game informs you of the number of guesses made and updates the leaderboard accordingly.

### Code Structure
- **Struct Player:** Represents a player with a name and the number of guesses made.
- **Function GetGuess():** Responsible for obtaining a valid guess from the user.
- **Function Game():** Implements the core logic of the game.
- **Function sortLeaderboard():** Sorts the leaderboard in ascending order based on the number of guesses.
- **Function main():** Orchestrates the game flow, handles user inputs, and reads/writes the leaderboard to a file.

### Important Notes
- The leaderboard is stored in `leaderboard.txt`, holding the names and scores of the top players.
- The program utilizes standard libraries like `<stdio.h>`, `<stdlib.h>`, `<time.h>`, and `<math.h>` for managing inputs/outputs, random numbers, and mathematical operations, respectively.

### Example

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    // ... main game loop ...
    return 0;
}
```

### Compilation
To compile the program, use the following command (assuming `gcc` is installed):
```sh
gcc game.c -o game
```
Run the generated executable `game` to play the game.
```sh
./game
```

### Running the Game
- Follow the on-screen prompts to input your name and guesses.
- The game will notify you when you have guessed the correct number and will update the leaderboard accordingly.
