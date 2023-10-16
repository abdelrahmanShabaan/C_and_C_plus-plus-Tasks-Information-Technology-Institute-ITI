#include <stdio.h>
#include <stdlib.h>

int main()
{

        /* Decision Making  ->  */
        //If Statment   , else if , else

        //define variable
        int x = 8;


        //condition
        if (x == 2)
        {

            //code true
            printf("we found x actually equal 2 : %d" , x);


        }else if (x == 3)
        {
            //code false
            printf("we  Found x = 3 , we found with number : %d" , x);

        }else {

            //code for not found any Conditions right
            printf("WE FOund the value of x not the first con. And not second con. ,, we found with different value %d" , x);
        }




    return 0;
}
