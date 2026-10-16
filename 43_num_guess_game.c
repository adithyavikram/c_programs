// a number guessing game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    const int MIN = 1;
    const int MAX = 100;

    int answer;
    int guess;
    int guesses = 0;

    srand(time(0));     //we take present time as the seed for random number generator

    answer = (rand() % MAX) + MIN;
    //printf("%d", answer);

    do
    {
        printf("\nEnter the guess (1 - 100) : ");
        scanf("%d", &guess);

        if(guess > answer)
        {
           printf("Guess is higher than answer.\n");
        }
        else if (guess < answer)
        {
            printf("Guess is lower than answer.\n");
        }
        else
        {
            printf("CORRECT !\n");
        }
        guesses++;
        
    }while (guess != answer);

    printf("######################################\n");
    printf("Answer : %d\n", answer);
    printf("No of guesses : %d\n", guesses);
    printf("######################################");

    return 0;
}