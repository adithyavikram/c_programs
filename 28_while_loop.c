// while loop executes as long as the condition is true or never at all
//

#include <stdio.h>
#include <string.h>

int main(){

    char name[25];
    printf("\nenter your name : ");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0' ;

    while (strlen(name) == 0){

        printf("\nenter your name : ");
        fgets(name, 25, stdin);
        name[strlen(name)-1] = '\0' ;
        
    }

    printf("\nyour name is %s", name);

    return 0;
}