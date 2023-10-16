#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* ------------------------ Break & Continue --- looping (for , while , do while) ----------------------------------*/


    //For loop

    int i=0;

    do{
        if(i ==5)
        {
            break;
        }

        printf("%d\n" ,i);
        i++;
    }


    while(i <= 10);



    return 0;
}
