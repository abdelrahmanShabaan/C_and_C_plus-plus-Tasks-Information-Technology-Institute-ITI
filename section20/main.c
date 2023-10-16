#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* Write c program use Multi-dimensional Array and print the index [0][1]of this array*/

    int building[2][3] = { {25,88,97} , {47,85,23} };

    printf("the result of print index[0] as row and index[1] as column is : %d \n" ,building[0][1]  ); //88



    /* Write c program use Multi-dimensional Array and change the value of index [0][1] and print the value of it after change*/
    building[0][1] = 29;
     printf("the result of print index[0] as row and index[1] as column is : %d \n" ,building[0][1] ); //29


     /* Write c program use Multi-dimensional Array and print all of values inside Multi-dimensional Array with using for loop*/

     for(int i=0; i <2; i++ )
     {
         for(int j=0;j <3;j++)
         {
             printf("%d \n" ,building[i][j] );
         }

            printf("\n");
     }


    return 0;
}
