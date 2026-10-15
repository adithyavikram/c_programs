// struct = It is a collection of related variable
//          they can of different data types
//          listed under one name in a block of memory

#include <stdio.h>
#include <string.h>

struct player
{
    char name[10];
    int score;
};

int main(){

    struct player p1;
    struct player p2;

    strcpy(p1.name, "john");
    p1.score = 12;

    strcpy(p2.name, "horus");
    p2.score = 10;

    printf("player 1 name : %s\n", p1.name);
    printf("score : %d\n", p1.score);

    printf("player 2 name : %s\n", p2.name);
    printf("score : %d\n", p2.score);

    return 0;
}