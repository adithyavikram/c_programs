#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C';           // single character  , %c
    char b[] = "Cusat";     //array of characters , %s
    
    // printf("%c\n",a);
    // printf("%s\n",b);


    float c = 3.141592;                 //4 bytes, 32 bits of precision (6-7 digits) , %f
    double d = 3.141592345678934;       //8 bytes, 64 bits of precision (15-16 digits), %lf
    
    // printf("%f\n",c);
    // printf("%0.10f\n",c);       //more precise but less accurate
    // printf("%0.13lf\n",d);      //precision of 13 digits

    bool e = true;          //1 byte , true or false , %d
    bool e_2 = false;

    // printf("%d\n",e);
    // printf("%d\n",e_2);


    char f = 119;           //1 byte , (-128 to +127) , %c or %d
    unsigned char g = 210;   //1 byte , (0 to +255) , %c or %d

    // printf("%d\n",f);
    // printf("%c\n",f);

    // printf("%d\n",g);
    // printf("%c\n",g);


    short h = 32667;            //2 bytes , (-32,768 to +32,767) , %d
    unsigned short i = 64535;   //2 bytes , (0 to +65,535) , %d

    // printf("%d\n",h);
    // printf("%d\n",i);


    int j = 2147483547;             //4 bytes , (-2,147,483,648 to +2,147,483,647) , %d
    unsigned int k = 4294967295;    //4 bytes , (0 to 4,294,967,295 ) , %u

    // printf("%d\n",j);
    // printf("%u\n",k);


    long long int l = 9215672123456789123;          //8 bytes , -9 quintillion to +9 quintillion , %lld
    unsigned long long int m = 1834214567898765432; //8 bytes , 0 to +18 quintillion , %llu

    // printf("%lld\n",l);
    // printf("%llu\n",m);

    return 0;

}