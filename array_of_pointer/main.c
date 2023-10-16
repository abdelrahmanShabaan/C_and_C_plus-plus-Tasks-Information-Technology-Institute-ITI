#include <stdio.h>
#include <stdlib.h>

int main()
{

float *ptr[3];
float array_one[5] , array_two[7],x;

    ptr[0]=array_one;
    ptr[1]=&x;
    ptr[2]=array_two;
    ptr[0][3]=9;
    ptr[1][0]=18;
    ptr[2][3]=23;
    printf("%f \n %f \n %f" ,ptr[0][3] , ptr[1][0] ,ptr[2][5]);

    return 0;
}
