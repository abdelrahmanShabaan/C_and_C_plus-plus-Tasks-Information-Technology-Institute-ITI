#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* Write C Program to make Bitwise operator type of AND  (&) for two variables and print the result  */

    int a = 60;
    int b =13;

    int c = a & b;
    printf("%d \n" , c); //1100  // 12


    /*Write C Program to make Bitwise operator type of OR (|) for two variables and print the result */
    c = a | b ;
    printf("%d \n" , c); //00‭11 1101‬    //61


    /*Write C Program to make Bitwise operator type of XOR (^)for two variables and print the result */

    c = a ^ b;
    printf("%d" , c); //00‭11 0001‬ //49

    return 0;
}
