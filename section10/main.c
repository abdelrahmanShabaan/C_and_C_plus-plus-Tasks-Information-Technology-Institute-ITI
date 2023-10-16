#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* •	Write C Program to make Logical operator type Logical AND (&&) for two variables and print the result */

    int a =5;
    int b =2;
   // printf("the result of logical operators is : %d" , a > 10 && a > 2 ); //0


    /* •	Write C Program to make Logical operator type Logical OR (||) for two variables and print the result */

    int d =10;
    int p =2;
    // printf("the result of logical operator OR is : %d" , d > 15 || p < 10 ); // f OR t // 1



    /* •	Write C Program to make Logical operator type Logical NOT !(logical) for two variables and print the result  */

    int s = 10;
    int t = 5;
    printf("the result of NOT :  %d" ,  !( s > 15 && s < 2 )   ); // 0 fasle  reverse --> 1 true




    return 0;
}
