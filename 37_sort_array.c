// a program to demonstrate array sorting in C

#include <stdio.h>

// function protoypes
void sortint (int[], int);
void printIntArray(int[], int);
void sortChar (char[], int);
void printCharArray(char[], int);

int main(){

    int num[] = {5, 3, 1, 7, 9, 2};
    int sizeint = sizeof(num)/sizeof(num[0]);
    printf("Size : %d\n", sizeint);

    printIntArray(num, sizeint);
    sortint(num, sizeint);
    printIntArray(num, sizeint);

    char lett[] = {'M', 'E', 'F', 'A', 'C'};
    int sizechar = sizeof(lett)/sizeof(lett[0]);
    printf("Size : %d\n", sizechar);

    printCharArray(lett, sizechar);
    sortChar(lett, sizechar);
    printCharArray(lett, sizechar);

    

    return 0;
}

// function to sort integer values
void sortint (int array[], int size)
{
    for (int pass=0; pass < size-1 ; pass++)
    {
        for (int i = 0; i < size-1-pass ; i++)
        {
            if (array[i] > array[i+1])
            {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
}

// function to print integer values
void printIntArray(int array[], int size)
{
    for (int i =0; i < size ; i++)
    {
        printf("%d " ,array[i] );
    }
    printf("\n");
}

// function to sort characters 
void sortChar (char array[], int size)
{
    for (int pass=0; pass < size-1 ; pass++)
    {
        for (int i = 0; i < size-1-pass ; i++)
        {
            if (array[i] > array[i+1])
            {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
}

// function to print character arrays
void printCharArray(char array[], int size)
{
    for (int i =0; i < size ; i++)
    {
        printf("%c " ,array[i] );
    }
    printf("\n");
}