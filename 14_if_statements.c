// program that demonstrates (if) , (if else) and (if ,else if and else)

#include <stdio.h>

int main(){

    int age;

    printf("\nenter your age : ");
    scanf("%d", &age);

    if(age >= 18){
        printf("\nyou are eligible for credit card.");
    }
    else if(age == 0){
        printf("\nyou are only born, so not eligible for credit card.");
    }
    else if(age < 0){
        printf("\nyou are not yet born!");
    }
    else{
        printf("\nyou are not eligible for credit card,you are too young.");
    }

    return 0;
}