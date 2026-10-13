// program to print array using a for loop

#include <stdio.h>

int main(){

    double prices[]={34.0, 57.32, 12.0, 22.0, 19.32};

    printf("\nsize of the array is : %d\n", sizeof(prices));

    for (int i=0 ; i < sizeof(prices)/sizeof(prices[0]) ; i++)      // total size/size of one element gives the total number of elements
    {
        printf("$%.2lf \n", prices[i]);
    }

    return 0;
}