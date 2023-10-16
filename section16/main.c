#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Write c program with one variable and make switch statement to check about the right case and print the value of it at the end*/

    int days = 8;

    switch(days)
    {
    case 1:
        printf("satrday");
        break;
    case 2:
        printf("sunday");
        break;
    case 3:
        printf("monday");
        break;
    case 4 :
        printf("tuesday");
        break;
    case 5:
        printf("wensday");
        break;
    case 6:
        printf("thursday");
        break;
    case 7:
        printf("friday");
        break;

    default :
        printf("No one of them is right value of days");
    }



    return 0;
}
