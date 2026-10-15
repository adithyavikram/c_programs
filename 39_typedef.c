// typedef is a reserved keyword that give an existing datatype a 'nickname'

#include <stdio.h>

//  typedef char user[25];

typedef struct
{
    char name[20];
    char password[15];
    int id ;
} User;

int main(){

    User u1 = {"john" , "john123" , 2330};
    User u2 = {"tony" , "ton300" , 2331};

    printf("User 1 : %s\n" , u1.name);
    printf("Passowrd  : %s\n" , u1.password);
    printf("User ID : %d\n" , u1.id);

    printf("\n");

    printf("User 2 : %s\n" , u2.name);
    printf("Passowrd  : %s\n" , u2.password);
    printf("User ID : %d\n" , u2.id);

    return 0;
}