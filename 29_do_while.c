// do while loop always executes the code segment atleast once before checking the condition

#include <stdio.h>

int main(){

    int number = 0;
    int sum = 0;

    do{
        printf("\nenter a positive number : ");  //inputing a negative number help to exits from the loop
        scanf("%d", &number);
        
        if (number > 0){

            sum += number;

        }
        

    }while(number > 0);

    printf("\nsum is : %d", sum);

    return 0;
}