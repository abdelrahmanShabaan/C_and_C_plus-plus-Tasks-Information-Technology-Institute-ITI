#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* Write c program use Array and print the index 1 of this array*/

    int numbers[4] = { 25, 38, 39 , 45};

   // printf("The value of index [1] is : %d" , numbers[1]); //38



    /*Write c program use Array and change the value of index 0 and print the value of it after change*/
    int numberChange[4] = { 99 , 20 , 78 , 49};

    numberChange[0] = 55;

   // printf("%d" ,numberChange[0] );


   /* •	Write c program use Array and print all of values inside array with using for loop*/

    char cars[3] = {'A','B','C'};

    for(char i=0; i < 3; i++ )
    {
        printf("%c \n" , cars[i]);
    }

    return 0;
}
