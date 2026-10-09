#include <stdio.h>

int main(){

    // format specifier '%' defines and format the type of data to be displayed

    // %c  = character
    // %s  = string
    // %d = integer
    // %f  = float
    // %lf = double

    // %.1 = decimal precision
    // %1  = minimum feild width
    // %-  = left allign

    float item1 = 5.76;
    float item2 = 72.32;
    float item3 = 100.46;

    printf("item 1 : $%f\n",item1);

    printf("item 1 : $%.1f\n",item1); // one decimal place
    printf("item 1 : $%.2f\n",item1); // two decimal place

    printf("\n");

    printf("right alligned with 8 digit width and two decimal places\n");
    printf("item 1 : $%8.2f\n",item1);
    printf("item 2 : $%8.2f\n",item2);
    printf("item 3 : $%8.2f\n",item3);

    printf("\n");

    printf("left alligned with 7 digit width and three decimal places\n");
    printf("item 1 : $%-7.3f\n",item1);
    printf("item 2 : $%-7.3f\n",item2);
    printf("item 3 : $%-7.3f\n",item3);



    return 0;
}