// program showing the use of struct arrays

#include <stdio.h>

struct Student
{
    char name[15];
    float gpa;
};

int main(){

    struct Student s1 = {"Tony" , 3.9};
    struct Student s2 = {"Horus" , 4.5};
    struct Student s3 = {"Titus" , 4.2};
    struct Student s4 = {"Roney" , 3};

    struct Student students[] = {s1 , s2 , s3 , s4};

    int size = sizeof(students)/sizeof(students[0]);

    for (int i = 0; i < size ; i++)
    {
        printf("%-10s", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }

    return 0;
}