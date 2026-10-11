//logical && (AND) operator  : checks to see if two or more conditions are true

#include <stdio.h>

int main(){

    float temp;
    bool sunny=true;

    printf("\nEnter the temprature (less than 100) : ");
    scanf("%f", &temp);

    if (temp >=0 && temp <=30 && sunny){
        printf("\nThe temprature is good.");
    }
    else if (temp >30 && temp <=100){
        printf("\nThe temprature is bad.");
    }
    else{
        printf("\nThe temprature %.1f entered is invalid or above 100", temp);
    }

    return 0;
}