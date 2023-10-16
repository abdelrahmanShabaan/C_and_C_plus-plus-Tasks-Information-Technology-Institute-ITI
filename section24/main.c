#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*•	Write c program to make pointer have address of another variable
     and print the address of this variable once with address variable and another with pointer.*/


     int x = 25; //address

     int *ptr;

     ptr = &x;


     // printf("the address of variable x is : %d \n" , &x); //address of variable x

    // printf("the address of variable that save in pointer is : %d" , ptr ); //address of var x with pointer




     /*•	Write c program to make pointer have address of another variable
      and print the value of variable by pointer asterisk *. */

      int y = 47; //value

      int *pPtr;

      pPtr = &y;


      printf("the value of variable y print by asterisk of  * pPtr is : %d" , *pPtr  );

    return 0;
}
