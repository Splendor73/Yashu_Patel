#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int GetGuess() {
    int guess;
    printf("Guess a value between 10 and 100: ");
    int num_values = scanf("%d", &guess);

    while(getchar() != '\n'); // clear buffer

    // re-prompt if user enters invalid guess
    while (num_values != 1 || guess < 10 || guess > 100) {
        printf("Make sure your guess is between 10 and 100: ");
        num_values = scanf("%d", &guess);
        while(getchar() != '\n'); // clear buffer
    }

    return guess;
}


void PlayGuessingGame() {
    
    srand(time(0));
    int ans = (rand() % 91) + 10;
    double root = sqrt(ans);
    int guessNumber = 0;
    
    printf("%f is the square root of what Number : ",root);

    while (1) {
            
        guessNumber = GetGuess();

        if (guessNumber == ans) {
            printf("you got it baby! \n");
            break;  
        }
        else if (guessNumber < ans) {
            printf("too low, guess again : ");
        }
        else {
            printf("too high, guess again: ");
        }
        
    }
}

typedef struct {
    char name[50];
    int guesses;
} Player;


int main () {
    
    char input[1];

    printf("Welcome! Press q to quit or any key to continue : ");
    scanf("%s", input);
    
    while (input[0] != 'q') {
        
        PlayGuessingGame();

        printf("Press q to quit or any key to continue : ");
        scanf("%s", input);

    }
    printf("Bye Bye !");
    
}