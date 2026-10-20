// pointers : a "variable like " reference that holds a memory address to another variable, array etc

#include <stdio.h>

void printAge(int *pAge){

    printf("you are %d years old.\n", *pAge);

}

int main (){

    int age = 10;

    // printf("value of age : %d\n", age);
    // printf("address of age : %p\n", &age);

    int *pAge = &age;
    
    // OR
    // int *pAge = NULL;
    // pAge = &age;

    // printf("value of pAge : %p\n", pAge);
    // printf("value at the pAge address : %d\n", *pAge);        // dereferencing

    // printf("size of age : %d bytes\n", sizeof(age));
    // printf("size of pAge : %d bytes\n", sizeof(pAge));

    printAge(pAge);

    return 0;
}