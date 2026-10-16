// Program demonstrating random number generation and their use in C

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    // pseudorandom numbers : a set of values or elements that are statisticaly random

    srand(time(0));

    int num1 = rand();
    int num2 = (rand() % 6);
    int num3 = (rand() % 6) + 1 ;
    int num4 = (rand() % 3);

    printf("\nNumber 1 : %d", num1);
    printf("\nNumber 2 : %d", num2);
    printf("\nNumber 3 : %d", num3);
    printf("\nNumber 4 : %d", num4);


    return 0;
}