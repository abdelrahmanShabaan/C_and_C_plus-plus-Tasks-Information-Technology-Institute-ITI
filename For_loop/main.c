#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*-------------------------------- For loop (deterministic loop) --------------------------------*/


    // statment1 : fixed value loop | exctue one-time
    //statment 2:condition | for excute code
    // statment 3 : every time execute (increment / decrement)
    // 1--------------100


    //Single for loop

            for(int i=0;i < 10 ; i++)
            {
                printf("the number print now is : %d \n" , i);

            }


    //Nested For loop

        // days -> work
            int day ,work;

            for(day=1; day < 7; day++)
            {
                for(work=1; work <4; work++)
                {
                    printf("%d %d" , day , work);
                    printf("\n");
                }
            }




    return 0;
}
