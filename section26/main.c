#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*	Write c program to save quantum of data use Malloc function with idea of dynamic memory allocate.*/

    int *ptr;
    ptr  = (int*)malloc(5*sizeof(int));
    //printf("the quantum that save in memory will have address %d" , ptr );



    /*Write c program to save quantum of data use calloc function with idea of dynamic memory allocate.*/

    int *pPtr;

    pPtr = (int*)calloc(5,sizeof(int));

    pPtr[0] =22;
    pPtr[1] =48;
    pPtr[2] = 57;
    pPtr[3] = 19;
    pPtr[4] = 25;



    /*•	Write c program to modify quantum of data use realloc function with idea of dynamic memory allocate.*/

    pPtr = (int*)realloc(pPtr,7*sizeof(int));

    pPtr[5] = 44;
    pPtr[6] = 67;

    //for loop
    for(int i=0;i <7;i++)
    {
        printf("%d \n" ,pPtr[i]);
    }

        /*•	Write c program to use free function to deallocate that size was save in dynamic in memory for data.*/

        //free function
        free(pPtr);


    return 0;
}
