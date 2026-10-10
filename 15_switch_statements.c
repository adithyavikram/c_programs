// program that demonstrates the use of switch statement in c

#include <stdio.h>

int main(){

    char grade;

    printf("\nenter your grade (A/B/C/D/F) : ");
    scanf("%c", &grade);

    switch (grade){
        case 'A' :
            printf("\nyou have the PERFECT grade.");
            break; 
        
        case 'B' :
            printf("\nGOOD grade.");
            break;
        
        case 'C' :
            printf("\nOKAY grade.");
            break;

        case 'D' :
            printf("\nbad grade,could have been worse.");
            break;

        case 'F' :
            printf("\nFAILED");
            break;

        default :
            printf("\nplease enter a valid grade.");
    }

    return 0;
}

//without break statements within switch , every statement after the first correct condition till the default will be executed