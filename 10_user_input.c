#include <stdio.h>
#include <string.h>

int main(){

    int age;
    char name[25];

    printf("\n");

    printf("what is your name? ");
    fgets(name,25, stdin);          //fgets when used normally accepts the newline character as input to the string   
    name[strlen(name)-1] = '\0';    // now we have removed the newline character and placed null character there to end the string
    
    // scanf("%s", &name);          // if whitespaces are present within the input scanf wont accept the full input and the program misbehaves

    printf("How old are you? ");
    scanf("%d", &age);

    printf("hello %s, ", name);
    printf("You are %d years old.",age);

    return 0;
}