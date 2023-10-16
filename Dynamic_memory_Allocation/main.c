#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    ------------------------ Heap ---------------------
    * pointer

     malloc() done
     calloc() done
     realloc() done
     free() done

    */

    int *ptr;

    //create malloc  7number * 4bytes(int) = 28bytes int d-dynamic memroy allocation heap

    //create malloc  7number * 4bytes(float) = 28bytes float d-dynamic memroy allocation heap

     ptr = (float*)malloc(5*sizeof(float));

     ptr[0]=45;
     ptr[1]=59;
     ptr[2]=78;
     ptr[3]=79;
     ptr[4]=69;

     ptr = (int*)realloc(ptr ,7*sizeof(int)); //realloc --> edit

     ptr[5]=45;
     ptr[6]=23;


     //print realloc_ (edit)
     for(int i=0;i<7;i++)
    {

        printf("%d \n" , ptr[i]);
    }

    // dynamic  memeory allocation
    //  فضي خلاص مساحة ال heap
    // كل القيم والاماكن اللي استخدمتها وخلصت شغل بيها
    free(ptr);



    return 0;
}
