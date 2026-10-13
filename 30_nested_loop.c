// nested loop is a loop inside another loop

#include <stdio.h>

int main(){

    int rows;
    int columns;
    char symbol;

    printf("\nEnter the number of rows : ");
    scanf("%d", &rows);

    printf("enter the number of columns : ");
    scanf("%d", &columns);

    scanf("%c");            // this is used to remove the new line character from the end of the line to be not taken as the input charatcter to the next line

    printf("enter the symbol to print : ");
    scanf("%c", &symbol);


    for (int i=1 ; i <=rows; i++)
    {
        for (int j=1 ; j <=columns ; j++)
        {
            printf("%c ",symbol);
        }
        printf("\n");
    }

    return 0;
}