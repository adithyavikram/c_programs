#include <stdio.h>

int main(){

    int x;          //variable declaration
    x = 1987;       //varaible initialization

    int y=2026;     //variable declaration + initialization

    int age=25;             //integer
    float gpa=7.21;         //floating point number
    char grade='C';         //single character
    char name[]="avrn";     //array of characters

    printf("hello %s\n",name);
    printf("your age is %d\n",age);

    printf("your average grade is %c\n",grade);
    printf("Mr.%s your gpa is %f",name ,gpa);

    return 0;
}