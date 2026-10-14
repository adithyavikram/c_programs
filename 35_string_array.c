// a program to show string parsing in a 2D array

#include <stdio.h>
#include <string.h>

int main(){

    char car[][10] = {"ford" , "tata" , "tesla"};

    //car[2] = "byd" ;          // this wont work in the case of strings
    strcpy(car[2], "byd");

    for (int i = 0; i < sizeof(car)/sizeof(car[0]) ; i++)
    {
        printf("\n%s", car[i]);
    }

    return 0;
}