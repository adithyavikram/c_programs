#include <stdio.h>

int main(){

    float temp;

    printf("\nEnter the temprature (less than 100) : ");
    scanf("%f", &temp);

    if (temp >=20 && temp <=30){
        printf("\nThe temprature is good.");
    }
    else if (temp >30 && temp <=100){
        printf("\nThe temprature is bad.");
    }
    else{
        printf("\nThe temprature %f entered is invalid or above 100", temp);
    }

    return 0;
}