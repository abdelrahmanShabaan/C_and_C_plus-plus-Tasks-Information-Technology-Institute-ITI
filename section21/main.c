#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* Write c program to make string and print this string*/

    char morning[] = "Hello world!";

    printf("%s \n" , morning );



    /* Write c program to make string and modify index[0] by another value and print string at the end*/

    char name[] = "Abdelrahman shaaban";

    name[0] = 'E';

    printf("%s \n"  ,name );


    /*•	Write c program to make string and access value of index[4]*/

        char cars[] = "Mercedes";

        printf("%c \n" , cars[4]);


    /* Write c program make string with scape sequence \” and print the string  */

    char shop[] = "we have t\"shirt";

    printf("%s" , shop );

    return 0;
}
