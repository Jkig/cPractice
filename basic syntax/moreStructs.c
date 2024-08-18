#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Player {
    char name[12];
    int score;
};

int rand_int(int min, int max) {
  return rand() % (max - min + 1) + min;
}

int main () {
    srand(time(NULL));
    struct Player player1;
    strcpy(player1.name, "derek");

    struct Player player2;
    strcpy(player2.name, "bruv");


    int numTries = 500;
    int trials[numTries];


    for (int i=0;i<numTries;i++) {
        int trial = 0;
        do {
            trial++;
            player1.score = rand_int(0, 100);
            player2.score = rand_int(0, 100);
            if (player2.score == player1.score){
                break;
            }
            /*
            printf("\n%d to %d  ", player1.score, player2.score);
            
            if (player2.score < player1.score){
                printf("%s wins", player1.name);
            }
            else if (player2.score == player1.score){
                printf("It's a tie!!!");
                break;
            }
            else {
                printf("%s wins", player2.name);
            }
            */
        } while (1);
        trials[i] = trial;
    }

    int sum = 0;
    float average;

    for (int i = 0; i < numTries; i++) {
        sum += trials[i];
    }

    average = sum / (float) numTries;

    printf("\n\nThe average number of trails was: %.2f\n", average);

    return 0;
}