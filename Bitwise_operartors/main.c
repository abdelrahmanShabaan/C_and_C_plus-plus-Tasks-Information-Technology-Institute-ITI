#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Bitwise Operators ->>>> 0 1  //Binary System - >>>> Advanced application ( c ,c++ c#) */

    // & |  XOR ^  << >>   01011100

    int x = 60;
    int y =13;
    int z;

    //Bitwise operators  AND
    z = x & y; //Bitwise oprtators
    printf("z when use AND By Bitwise : %d \n" , z); //12 ----1100 -> Bitwise operators

    //Bitwise operators  OR
    z = x | y; //Bitwise operators
    printf("z when use OR By Bitwise %d \n" , z); //61--------- ‭‭11 1101‬‬  -> Bitwise operators

    //Bitwise operators  XOR
    z = x ^ y;
    printf("z when use XOR By Bitwise %d \n" , z); //49 -------  ‭‭11 0001‬ ->   Bitwise operatos

    //Bitwise operators <<
    z = x << y;
     printf("z when use << By Bitwise %d \n" , z); // ‭491,520‬  -------- ‭111 1000 0000 0000 0000‬ Bitwise opertors

     //Bitwise opertors >>
      z = x >> y;
     printf("z when use >> By Bitwise %d \n" , z); // ‬ 0‬ -------- ‭‬0‬ Bitwise opertors


    return 0;
}
