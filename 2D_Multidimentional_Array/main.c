#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* --------------------------------------2D- Multidimensional  Array [index] -------------------------------*/


                /*----------------------------- syntax -----------------------------*/

            //Data-type + Name-2D-Array [rows] [columns] = { ..rows{columnvalues}};

            int myNumber[2][3] = { {2,5,8} , {3,6,8} };

            int r , c;


            /* ----------------------------- print Array[index] -----------------------------*/

           // printf("%d" , myNumber[0][0]); //output 2




             /*------------------ change value of index inside Array -----------------------------*/

            // Name of 2d Array [index row] [index column] = newValue;

             myNumber[0][0] = 9;

            // printf("%d" ,  myNumber[0][0]);


               /*-------------------- for loop {All value in Array}---------------------*/

               // Nested for
               //rows
               for(r=0;r<2;r++)
               {
                   printf("\n");
                //column
                for(c=0;c<3;c++)
                    {
                        printf("%d \t" , myNumber[r][c]);
                    }
               }


    return 0;
}
