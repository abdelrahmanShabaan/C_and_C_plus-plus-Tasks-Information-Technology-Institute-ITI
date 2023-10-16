#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*------------------------------------ String[] ------------------------------------------*/

     /*------------------------------- First-Way  -------------- */

    char name[] = "Hello world!";

   // printf("%s" , name);

    /*-------------------------------------ACCESS CHAR INSIDE STRING-----------------------*/

   // printf("%c" , name[6]); // output


    /*---------------------------------------- Change index of value in our string-------------*/

    // name[4] = 's';
    // printf("%s" , name);


         /*-------------------------------  second-Way  -------------- */

       // char alphabet[] ={'A' , 'B' ,'C' ,'D','\0'};

       // printf("%s" ,alphabet);


        /*------------------------------------ looping string----------------------------------- */

        char student[] = "ahmed";

        //for loop string []

       /* for(int i=0;i <5; i++)
        {

            printf("%c \t", student[i]);
        }
*/


        /*------------------------------------ looping string----------------------------------- */
        char alphabet[] ={'A' , 'B' ,'C' ,'D','\0'};



        //for
      /*  for(int i=0;i <5; i++)
        {
            printf("%c \n" , alphabet[i]);
        }*/



        /*------------------ Escape Character ------------------------------------*/

        // \n underline
        // \t tab
        // \0 Null
        // \' single quotation
        // \" Double quotation

        char cars[] ="volvo\'mercedes\"bmw";

            // printf("%s" , cars);











    return 0;
}
