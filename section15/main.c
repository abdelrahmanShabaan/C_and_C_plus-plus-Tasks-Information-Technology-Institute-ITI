#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Write c program with two variables and make nested if to check if the two condition is right or wrong*/

    int a = 100;
    int b = 200;


    if(a == 300)
    {
        if(b == 200)
        {
            printf("the two variables values is true.");
        }
    } else
    {
            printf("the two variables values is wrong");
    }


    return 0;
}
