#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* Write C Program to make Misc operator type of (size of )for print of size of variables in memory */


        int intSize; // 4 bytes
        float floaSize; // 4 bytes
        double doubSize; //8 bytes

        printf("size of One integer in memory is : %lu    Bytes    \n" ,sizeof(intSize));
        printf("size of One float in memory is :   %lu     Bytes    \n" ,sizeof(floaSize));
        printf("size of One double in memory is :  %lu    Bytes    \n" ,sizeof(doubSize));




    return 0;
}
