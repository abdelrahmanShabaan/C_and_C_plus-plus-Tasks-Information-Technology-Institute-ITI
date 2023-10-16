#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0;
    int *ptr;


    printf("Hello sir,Please enter number of subjects :");
    scanf("%d" , &num);

    ptr=(int*)malloc(sizeof(int)*num);

    //if condition
    if(ptr!=NULL)
    {

        for(int i=0;i<num;i++)
        {
            printf("Hello sir ,Please enter grade of subject %d :" , i+1);
            scanf("%d" ,ptr+i);
            sum+=*(ptr+i);
        }

        printf("sum = %d" , sum);
        free(ptr);
    }else
    {
        printf("Invalid memory access");
    }


    return 0;
}
