// program to find the third side(hypotenuse) of a triangle when the two smaller sides are given as input

#include <stdio.h>
#include <math.h>

int main(){

    double a;
    double b;
    double c;

    printf("\nenter side 'a' :");
    scanf("%lf", &a);

    printf("\nenter side 'b' :");
    scanf("%lf", &b);

    c=sqrt(a*a + b*b);

    printf("\nside 'c' is %.2lf", c); // prints the third side ie side c upto two decimal places

    return 0;
}