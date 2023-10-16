#include <stdio.h>
#include <stdlib.h>

int  main( )
{
      /* Hello Dr.Yara i'm Abdelrahman shaaban*/
        /* This is the Second assignment of today / 13/8/2023*/

    // Here i will make one-Array and Two Variables
    int  a[25], n, i ;

    //Here i will make variables for sum & average with Float Data-type
    float  avg = 0, sum = 0 ;


        // Here i will make Display message and save the values in Memory
        printf(" Enter the Numbers of element in Array: ") ;
        scanf("%d ",& n) ;

        //Here i will make new display Text and it will Save after this with &a in Memeory
        printf("\n Enter the Array of Element : \n") ;

        for (i = 1; i <= n ; i++)
            {
                scanf("%d",&a[i]) ;
            }

        // Second loop for sum and average that had token from EndUser
        for (  i = 1 ; i <= n ; i++)
        {
                sum = sum + a[i] ;
                avg = sum / n ;
        }


        //Here i will make print for Values at the end
    printf("\n Sum of Element of Array is : %f ",sum) ;
    printf("\n Average of Element of Array are : %f ",avg) ;



  return ( 0 ) ;
}
