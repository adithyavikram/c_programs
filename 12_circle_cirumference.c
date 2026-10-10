//program to calculate the area and circumference of a circle by giving radious of the circle

#include <stdio.h>

int main(){

    const double PI = 3.14159265359;

    double radious;
    double circumference;
    double area;

    printf("\nenter the radious of a circle : ");
    scanf("%lf", &radious);

    circumference = 2*PI*radious;
    area = PI*radious*radious;

    printf("circumference of the circle is %lf", circumference);
    printf("\narea of the circle is %lf",area);

    return 0;
}