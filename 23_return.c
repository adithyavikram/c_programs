// a program to demonstrate the use of return statement within a function

#include <stdio.h>

double square(double num){

    double result;
    result = num * num;
    return result;

}

int main(){

    double x=3.24;
    x = square(x);
    printf("\nthe square is %lf",x);

    return 0;
}