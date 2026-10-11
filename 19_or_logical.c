// logical OR operator (||) : checks if atleast one condition is true

#include <stdio.h>

int main(){

    float temp=25;

    if (temp <= 0 || temp >=30){
        printf("\nthe temprature is bad.");
    }
    else{
        printf("\nthe temprature is good.");
    }

    return 0;
}