#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// #include <inpuut whaterver


int main () {
    srand(time(NULL));

    const int MIN = 1;
    const int MAX = 100;

    int guess;
    int answer = (rand() % MAX) + MIN;
    int guesses = 0;

    do {
        // take input and set guess = input

        return 1;
        guesses++;
        if (guess < answer) {
            printf("too low\n");
        }
        else if (guess == answer) {
            break;
        }
        else {
            printf("too high\n");
        }
    } while (1);

    printf("You win!, it was %d, and too %d turns", answer, guesses);
    return 0;
}