#include <stdio.h>
#include <stdlib.h>


void justPri();

int main()
{

    /*•	Write c program to make Recursion Function calling itself
     and print it after calling by simple way with infinite loop just to practice.*/


     //calling
     justPri();

    return 0;
}



void justPri()
{
    printf("Hello world!");

    //recursion
    justPri();



}
