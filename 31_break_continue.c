// continue : this will stop the execution of rest of the code in the loop and goes to next iteration of the loop
// break : this will exit out of the loop and stop further iteration of that loop

#include <stdio.h>

int main(){

    for(int i=1 ; i <=12 ; i++)
    {
        if (i == 7){

            continue;       // skip the rest of this iteration → 7 is not printed

            //break;          // exits from the for loop -> numbers after 6 are not printed
        }

        printf("%d\n",i);
    }

    return 0;
}
