//  enum : a user defined type of named integer identifiers that helps to make a program more readable

#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main(){

    enum Day today = Wed;

    printf("\n%d", today);      // enums are not string but they can be treated as strings

    if (today == Sun || today == Sat)
    {
        printf("\ntoday is a weekend :)");

    }
    else 
    {
        printf("\ntoday is a working day :(");
    }

    return 0;
}