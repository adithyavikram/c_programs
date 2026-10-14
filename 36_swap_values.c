// a program which demonstrates the swaping of values in C

#include <stdio.h>
#include <string.h>

int main(){

    // swaping numbers
    int x = 10;
    int y = 32;
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("x : %d\n", x);
    printf("y : %d\n", y);

    // swaping charaters
    char a = 'A';           // use single quotes for single characters
    char b = 'B';
    char tempc;

    tempc = a;
    a = b;
    b = tempc;

    printf("a : %c\n",a);
    printf("b : %c\n",b);

    //  swaping strings
    char str1[10] = "ford";
    char str2[10] = "tata";
    char tempstr[10];

    strcpy(tempstr, str1);      // while using strcpy make sure that both arguments are of the same size (eg: here they all are of size 10)
    strcpy(str1, str2);         // if they have different size it can cause unexpected behaviour
    strcpy(str2, tempstr);

    printf("str1 : %s\n", str1);
    printf("str2 : %s\n", str2);


    return 0;
}