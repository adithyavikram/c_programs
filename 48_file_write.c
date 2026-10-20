// a program to create a file and write into it

#include <stdio.h>

int main (){

    FILE *pF = fopen("text.txt", "w");  //  "w" -> write , "a" -> append , "r" -> read

    fprintf(pF, "hello world.");

    fclose(pF);     //close the file 

    fopen("text.txt", "a");

    fprintf(pF, "\nnext hello world.");

    fclose(pF);

    // code to remove the text file

    // if (remove("text.txt") == 0)
    // {
    //     printf("\nfile removed successfully");
    // }
    // else
    // {
    //     printf("\nno file Deleted!");
    // }

    return 0;
}