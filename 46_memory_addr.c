//  a program showing memory addresses and blocks

//  memory : an array of bytes within the ram (analogy : street)
//  memory block : single unit(byte=8 bits) within the memory , used to hold some value (analogy : a person in a house)
//  memory address :  address of where the memory block is located ,(analogy : house address)

#include <stdio.h>

int main (){

    char x;
    char y;
    char z;

    printf("%d bytes\n", sizeof(x));
    printf("%d bytes\n", sizeof(y));
    printf("%d bytes\n", sizeof(z));

    printf("%p\n", &x);
    printf("%p\n", &y);
    printf("%p\n", &z);


    int a;
    int b;
    char c;
    double d;
    short e;

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));
    printf("%d bytes\n", sizeof(d));
    printf("%d bytes\n", sizeof(e));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
    printf("%p\n", &e);

    int ar[] = {12,14,534,23};
    int arr[12];
    char arra[12];

    printf("%d bytes\n", sizeof(ar));
    printf("%d bytes\n", sizeof(arr));
    printf("%d bytes\n", sizeof(arra));

    printf("%p\n", &ar);
    printf("%p\n", &arr);
    printf("%p\n", &arra);
    

    return 0;
}