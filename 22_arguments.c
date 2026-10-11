// a program to demonstrate the use of functions and arguments within them

#include <stdio.h>

void birthday(char name[], int age){
    printf("\nHappy birthday %s", name);
    printf("\nYou are %d years old.",age);
}

int main(){

    char name[]="john";
    int age = 26;
    birthday(name, age);

    return 0;
}