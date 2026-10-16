// a simple quiz game in C

#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[][100] = {"1. What year was C created ?", 
                             "2. Who created C language ?", 
                             "3. Which is the new version of C ?"};

    char options[][100] = {"A. 1975 ", "B. 1972", "C. 1964", "D. 1998",
                           "A. Dennis Ritche", "B. Tesla", "C. Edison", "D. Mark Z",
                           "A. B", "B. Java", "C. C++", "D. Ada"};
    
    char answers[3] = {'B' , 'A' , 'C'};

    char guess;

    int score = 0;

    int numOfQuest = sizeof(questions)/sizeof(questions[0]);

    for (int i = 0; i < numOfQuest; i++)
    {
        printf("%s\n", questions[i]);

        for (int j = (i*4) ; j < (i*4) + 4 ; j++ )
        {
            printf("%s\n", options[j]);
        }
        printf("Enter answer : ");
        scanf("%c", &guess);
        scanf("%c");     // this scanf is to remove the new line \n character

        guess = toupper(guess);

        if (guess == answers[i])
        {
            score++;
            printf("CORRECT ! \n");
            printf("Answer is %c\n", answers[i]);
            printf("\n");
        }
        else
        {
            printf("WRONG ! \n");
            printf("Answer is %c\n", answers[i]);
            printf("\n");
        }

    }
    printf("\n");
    printf("*****************************\n");
    printf("Score is %d/%d \n", score , numOfQuest);
    printf("*****************************\n");

    return 0;
}