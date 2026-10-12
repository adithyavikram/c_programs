// a program to demonstrate the string functions in C
//

#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "JOhn";
    char string2[] = "Doe";

    //strlwr(string1);                        // converts the string to lowercase
    //strupr(string1);                        // converts the string to uppercase 

    //strcat(string1, string2);               // concatnates string2 to the end of string1
    //strncat(string1, string2, 2);           // concatanates 'n' characters from string2 to end of string1

    //strcpy(string1, string2);               // copy string2 to string1       
    //strncpy(string1, string2, 2);           // copy n characters of string2 to start of string1       

    //strset(string1,'#');                    // set all the characters of string1 to a given character(eg: #)
    //strnset(string1, '$', 2);               // sets first n (eg:2) characters of string1 to a given character(eg: $)
    //strrev(string1);                        // reverses the given string

    //printf("%s", string1);

    int result = 0;

    result = strlen(string1);               // returns the length of the string as an integer
    
    //result = strcmp(string1, string2);      // compare contents of string1 and string2 , returns 0 if they are the same
    //result = strncmp(string1, string2, 1);  // compare the first 2 characters of string1 and string2 ,return 0 if the are the same

    //result = strcmpi(string1, string2);     // compare string1 and string2 ignoring the cases ,returns 0 if they are the same
    //result = strnicmp(string1, string2, 2); // compare the first two characters of string1 and string2 ignoring the cases, returns 0 if both are the same

    printf("%d", result);

    return 0;
}