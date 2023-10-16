#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Misc Operators .. SizeOF */

    int integer_size;
    float float_size;
    double double_size;

    //Misc operators (sizeOf , & -> Address ->Memory  , condition expression ?:)

    /*
    // size of -> size of bits in Memory for variable
    printf("%d \n" , sizeof(integer_size)); //output -> //4 bits
    printf("%d \n" , sizeof(float_size)); //output -> //4 bits
    printf("%d \n" , sizeof(double_size)); //output -> // 8 bits



    int x = 5;
    int y = 8;

    printf("%d" , &x); //address of Variable x from the Memory

*/



    //condition expression ?:

    int g = 20;
    int k;

    k = (g == 20) ? 20  : 30 ;

    printf("%d" , k ); // g = 10 ->>> 30


    return 0;
}
