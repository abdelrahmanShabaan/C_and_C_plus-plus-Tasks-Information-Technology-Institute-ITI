#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* Write c program with one variable and use if statement to show result of the variable value is right or not*/

    int a = 12;

    //if statement (condition)
    if(a == 12)
    {
        printf("the value of a is right");
    }else
    {
        printf("the value of a is wrong");
    }



    /* write C Program with two variables and make if statement to compare between them and print the result*/

        int x = 12;
        int y = 15;

        if(x == y)
        {
            printf("The compare here is right and x less than of y");
        }else if (x > y)
        {
            printf("the compare here meaning x bigger of y ");
        }else
        {
            printf("the value is deferent from case 1 , and 2 ");
        }


    return 0;
}
