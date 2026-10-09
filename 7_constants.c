#include <stdio.h>

int main (){

    // constant is a fixed value that cannot be altered by the program during execution.

    //problems if constants are not used where they should be
    float pi = 3.142356478;
    printf("pi value 1: %f\n", pi);

    // value of pi gets changed here in the program during execution
    pi = 356.876;
    printf("pi value 2: %f\n\n", pi);

    const float PI=3.1453267;
    printf("value of PI is %f\n", PI);

    // throws an error and prevents execution of program
    // PI=450.23;
    // printf("PI is %f", PI);

    return 0;
}