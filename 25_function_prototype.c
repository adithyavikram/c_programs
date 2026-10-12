// function prototype
//this is a function declaration without a body , before main
// it ensures that calls to a function are made with correct number and type of arguments

//notes:
// many c compilers dont check for parameter matching and the program will compile and run
// missing arguments will result in unexpected behaviour
// a function prototype causes the compiler to flag an error if arguments are missing and to not compile and run the program

#include <stdio.h>

void message(char[] ,int);  //prototype of message() function

int main(){

    char name[] = "john";
    int age = 26;

    message(name,age);  //if we try to pass only one argument function will throw an error

    return 0;
}

void message(char name[], int age){

    printf("\nyour name is %s", name);
    printf("\nyou are %d years old.", age);

}