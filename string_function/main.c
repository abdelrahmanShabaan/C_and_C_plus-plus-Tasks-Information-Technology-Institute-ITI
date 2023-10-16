#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    /*----------------------------- string  Functions -----------------------------------*/


    // strlen ---- function جاهزة بتحسب عدد الحروف في الكلمة

       // char cars[] = "mercedes";

            //printf("%d" , strlen(cars));



    // sizeof

        //char books[12] = "bethoven";

       // printf("%d \n" , strlen(books));
      //  printf("%d" , sizeof(books));


       // stract ->concatonate ربطهم ببعض

        //char name1[] = "Hello ";
        //char name2[] = "world!";

       // strcat(name1,name2);

        // printf("%s" , name1);



         // strcpy function
           char name1[] = "Hello World!";
           char name2[20];


            strcpy(name2,name1);

            printf("%s" , name2); //output






    return 0;
}
