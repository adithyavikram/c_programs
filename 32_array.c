// a program to familiarize with arrays in C
// arrays are data structures that can store values of the same type in continues memory locations

#include <stdio.h>
 int main(){

    double prices[]={21.0, 5.0, 34.0, 10.0, 3.45};      // values are given along with the declaration of array

    printf("\n%lf",prices[3]);


    int num[4];     // an array of size 4 is declared with no values

    num[0] = 21;        // value is given into the array
    num[1] = 18;
    //num[16] =23;        // this is invalid but dont throw any error and executes successfully, but will lead to major issues later

    printf("\n%d", num[1]);     // prints '21' value in num[1] ; unassigned indices like num[6] would print garbage


    return 0;
 }