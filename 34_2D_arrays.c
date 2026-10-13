// a 2D arrary is an array where each element is an entire array
// usefull of r matrice , grid, table etc

#include <stdio.h>

int main(){

    int num[2][3];      // an arrays with two rows that contain three elements in each row

    num[0][0] = 11;
    num[0][1] = 12;
    num[0][2] = 13;

    num[1][0] = 21;
    num[1][1] = 22;
    num[1][2] = 23;

    // OR
/*
    int num[2][3] = {{11, 12, 13},{21, 22, 23}};
*/
    
    //to find the number of rows and number of columns

    int rows = sizeof(num)/sizeof(num[0]);  // rows = size of array / size of one row of array

    int columns = sizeof(num[0])/sizeof(num[0][0]);     // columns = size of one row / size on an element in the row

    printf("\nNo of rows : %d", rows);
    printf("\nNo of columns : %d\n", columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns ; j++)
        {
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }

    return 0;
}