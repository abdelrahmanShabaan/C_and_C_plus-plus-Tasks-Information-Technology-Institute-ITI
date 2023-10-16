#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* Write C Program to Typecast two variable with Integer datatype to be double in equal operation. */


    int x =5;
    int y =2;

    double z = (double)x / y; //2.5

    printf("%.1lf" , z);

    return 0;
}
