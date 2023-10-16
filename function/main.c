#include <stdio.h>
#include <stdlib.h>

//define prototype
void nameOne(void);
int add(int x , int y);
int sub(int s , int k);
int main()
{
    //call first function
    nameOne();

    //call for second function
    add(5 , 2); //result 7

    //call for third function
    sub(10 , 5); //result 5

    return 0;
}

//New Function
void nameOne(void)
{
    printf("Hello world!\n");

}

int add(int x , int y)
{
    //addational process ++
    int result = x + y;
    printf("%d\n" , result);
}

int sub(int s , int k)
{
    //substraction process --
    int result = s - k;
    printf("%d \n" ,result );
}
