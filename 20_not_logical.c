// NOT logical operator (!) : reverses the state of a given condition

#include <stdio.h>
#include <stdbool.h>

int main(){

    bool sunny=true;  //you can use flase or you can also use 1/0 for true/false ,default value is zero(false)

    if(!sunny){
        printf("\nIts cloudy outside.");
    }
    else{
        printf("\nIts sunny outside.");
    }

    return 0;
}