// program to read a file in C

#include <stdio.h>

int main (){

    FILE *pF = fopen("target.txt", "r");

    char BUFFER[255];

    if (pF == NULL)
    {
        printf("\nno such file in the directory.");
    }
    else
    {
        while (fgets(BUFFER , 255 , pF) != NULL)
        {
            printf("%s", BUFFER);
        }
    }

    return 0;
}