#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct {
    char name[50]; 
    int num;
} Player;

int GetGuess() {
    int guess;
    int num;

    printf("Guess a value between 10 and 100: ");
    num = scanf("%d", &guess);

    while(getchar() != '\n');

    while (num != 1 || guess < 10 || guess > 100) { 
        printf("Make sure your guess is between 10 and 100: "); 
        num = scanf("%d", &guess); 
        while(getchar() != '\n');
    }

    return guess;
}

int Game() {
    srand(time(0));
    int ans = (rand() % 91) + 10;
    double root = sqrt(ans);
    int gNum = 0;
    int count = 0;

    printf("%f is the square root of what Number: ", root);

    while (1) {
        count++;
        gNum = GetGuess();

        if (gNum == ans) {
            printf("You got it, baby!\n");
            break;
        } else if (gNum < ans) {
            printf("Too low, guess again: ");
        } else {
            printf("Too high, guess again: ");
        }
    }

    return count;
}

void sortLeaderboard(Player *leaders, int lCount) {
    for (int i = 0; i < lCount - 1; i++) {
        for (int j = 0; j < lCount - i - 1; j++) {
            if (leaders[j].num > leaders[j + 1].num) {
                Player temp = leaders[j];
                leaders[j] = leaders[j + 1];
                leaders[j + 1] = temp;
            }
        }
    }
}

int main() {
    Player leaders[5];
    int lCount = 0;

    FILE *file = fopen("leadboard.txt", "r");

    if (file) {
        while (fscanf(file, "%49s %d", leaders[lCount].name, &leaders[lCount].num) != EOF && lCount < 5) {
            lCount++;
        }
        fclose(file);
    }

    char input[2];

    printf("Welcome! Press 'q' to quit or any other key to continue: ");
    scanf("%1s", input);

    while (input[0] != 'q') {
        char n[50];

        printf("Please enter your name to start: ");
        scanf("%49s", n);

        int c = Game();

        printf("You made %d guesses.\n", c);

        Player newP;
        snprintf(newP.name, 50, "%s", n);
        newP.num = c;

        int i;

        for (i = 0; i < lCount && i < 5; i++) {
            if (c < leaders[i].num) break;
        }

        if (i < 5) {
            for (int j = 4; j > i; j--)
                leaders[j] = leaders[j - 1];
            leaders[i] = newP;
            if (lCount < 5)
                lCount++;
        }
        
        // Sort the leaderboard
        sortLeaderboard(leaders, lCount);

        printf("Here are the current leaders:\n");
        for (int i = 0; i < lCount; i++)
            printf("%s made %d guesses\n", leaders[i].name, leaders[i].num);

        printf("Press 'q' to quit or any other key to continue: ");
        scanf("%1s", input);
    }

    // Before writing to the file, ensure the leaderboard is sorted
    sortLeaderboard(leaders, lCount);

    file = fopen("leadboard.txt", "w");

    if (file) {
        for (int i = 0; i < lCount; i++)
            fprintf(file, "%s %d\n", leaders[i].name, leaders[i].num);
        fclose(file);
    }

    printf("Bye Bye!\n");

    return 0;
}
