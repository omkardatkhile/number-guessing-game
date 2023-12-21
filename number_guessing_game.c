#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int actual_number = rand() % 100 + 1;

    int user_guess;
    int guess_count = 0;

    printf("Welcome to the Number Guessing Game!\n");

    while (1) {
        // Ask the player to guess the number
        printf("Guess the number between 1 and 100: ");
        scanf("%d", &user_guess);
        guess_count++;

        // Check if the guess is correct
        if (user_guess == actual_number) {
            printf("Congratulations! You guessed the correct number in %d guesses.\n", guess_count);
            break;
        } else if (user_guess < actual_number) {
            printf("Higher number, please try again.\n");
        } else {
            printf("Lower number, please try again.\n");
        }
    }
getch();
    return 0;
}

