#include <stdio.h>
#include <stdlib.h>

int main()
{
        /* -------------------------------------- Array [index] -------------------------------*/


        /*----------------------------- syntax -----------------------------*/
        // Data-type  + nameArray + [] + = + {value by indexing}

        int myNumber[4] = {2,8,9,12};

        /* ----------------------------- print Array[index] -----------------------------*/
         printf("the first value in array is :%d \n" , myNumber[0]); // output 2


        /*------------------ change value of index inside Array -----------------------------*/
        myNumber[1] = 15;//new value
         printf("\n %d \n" ,myNumber[1]);

        /*-------------------- for loop {All value in Array}---------------------*/

        for(int i=0;i <4;i++)
        {
            printf("\n %d \n" , myNumber[i]);

        }






    return 0;
}
