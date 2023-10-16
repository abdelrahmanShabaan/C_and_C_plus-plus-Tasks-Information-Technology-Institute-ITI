#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*--------------------------Pointer  to pointer --------------------------------------------*/

    int x = 4;

    int *ptr;

    int **pptr;


    //first pointer
    ptr = &x;

    //second pointer
    pptr = &ptr;


    //normal way to print value of any variable
    printf("Value of first variable x : %d \n" , x ); // 4

    // print to first pointer
    printf("Value of pointer ptr is %d \n" , *ptr); // 4 -> * ptr -> x ? = 4


    //print to second pointer
    printf("Value of pointer pptr is %d \n" , **pptr); // 4 -> pptr -> ptr -> x ? = 4






    return 0;
}
