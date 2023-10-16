#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    /* Write C Program to use Boolean data-type with two variables (one with true and another one false) and print the result of them*/
    bool trueVarable = true; //1
    bool falseVarable = false; //0

    printf("%d \n" , trueVarable ); //1
    printf("%d \n" , falseVarable );  //0


    /* Write C Program to use Boolean data-type with two variables (and compare between them) and print the result by 1 , 0*/
    int x =5;
    int y =10;

    printf("the result of two variables with integer data-type  and equal will show by boolean : %d" , x >2 && y < 15 ); // boolean 1


    return 0;
}
