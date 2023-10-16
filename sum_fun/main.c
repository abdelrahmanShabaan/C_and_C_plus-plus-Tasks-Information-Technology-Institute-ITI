#include <stdio.h>
#include <stdlib.h>

int add(int a,int b);
int main()
{

    int num1,num2,sum ,average;

        printf("please enter first number : ");
        scanf("%d" , &num1 );

        printf("please enter secon number : ");
        scanf("%d" , &num2);

        //function with sum
        sum =  add(num1 ,num2);
        printf("sum of two number is : %d \n" , sum);


        //average of them
        average = sum /2;
        int* ptr = &average;
        printf("average of two number is : %p" , ptr);


    return 0;
}


int add(int a, int b)
{

    return (a+b);
}
