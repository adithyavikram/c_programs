#include <stdio.h>
#include <math.h>

int main(){

    double A = sqrt(81);
    double B = pow(2,5);

    int C = round(3.28);
    int D = ceil(2.19);
    int E = floor(7.87);

    double F = fabs(-45);
    double G = log(3);
    double H = sin(45);
    double I = cos(30);
    double J = tan(90);
 
    printf("%lf", H);    // use '%d' instead of '%lf' while running 'int' type variables

    return 0;
}