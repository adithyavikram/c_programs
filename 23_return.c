// a program to demonstrate the use of return statement within a function

#include <stdio.h>

double square(double num){

    double result;
    result = num * num;
    return result;              //data type of the function should match the data type of return value(eg:result is of double data type hence the function 'square' should be also of double data type)

}

int main(){

    double x=3.24;
    x = square(x);
    printf("\nthe square is %lf",x);

    return 0;
}