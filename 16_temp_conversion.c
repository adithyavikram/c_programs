// program to convert the given input temprature to celsius or farenheit based on unit

#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nIs the temprature in Celsius(C) or Farenheit(F)? ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C'){
        printf("\nEnter the temprature in Celsius(C) : ");
        scanf("%f", &temp);
        temp = (temp * 9.0 / 5.0) + 32.0;
        printf("\nThe temprature in Farenheit is %.1f F", temp);
    }
    else if (unit == 'F'){
        printf("\nEnter the temprature in Farenheit(F) : ");
        scanf("%f", &temp);
        temp = (temp-32.0)*(5.0/9.0);  //if we use  5/9 instead since both are integers the 5/9 = 0 and output temp will also be 0
        printf("\nThe temprature in Celsius(C) is %.1f C", temp);
    }
    else{
        printf("\nThe unit %c is invalid",unit);
    }

    return 0;
}