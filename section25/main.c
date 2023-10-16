#include <stdio.h>
#include <stdlib.h>


/*•	Write c program to make struct with data and start to assign values
to this struct and print it after finish assigning for data in the into main function.*/

struct myStruct
{
        int num1;
        char strong;
};



int main()
{

    struct myStruct mS1;

    mS1.num1 = 10;
    mS1.strong= 'A';


    printf("the number assign in num1 struct data is %d \n" , mS1.num1);
    printf("the character assign in strong struct data is %c" , mS1.strong);






    return 0;
}
