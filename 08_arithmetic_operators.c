#include <stdio.h>

int main(){

    // arithmetic operators
    
    // + (addtion)
    // - (substraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    
    // ++ (increment)
    // -- (decrement)

    int x = 5;
    int y = 2;

    int z = x+y;
    printf("addition of x and y : %d\n",z);

    z=x-y;
    printf("substraction of x and y : %d\n",z);

    z=x*y;
    printf("multiplication of x and y : %d\n",z);

    z=x/y;
    printf("division of x and y without type conversion : %d\n",z);  // since z is an integer variable and y which divides x is also integer variable output is integer variable

    float a = x / (float)y;  // here 'a' is a float variable and 'y' is temporarily converted to float for the operation 
    printf("division of x and y after type conversion : %f\n",a);

    z= x % y;
    printf("modulus operation on x and y : %d\n\n",z); // modulus gives the remainder 

    printf("x is %d and y is %d\n",x,y);
    x++; // x is incremented by 1
    y--; // y is decremented by 1
    printf("now x is %d and y is %d\n",x,y);

    return 0;
}