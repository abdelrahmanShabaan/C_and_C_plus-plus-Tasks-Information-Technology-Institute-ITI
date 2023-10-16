#include <stdio.h>
#include <stdlib.h>


void priFun();
int priNumFunc(int data);

int main()
{


    /*Write c program to make Function to print Hello world! And calling it into Int Main to print the result of call.*/

    //calling
    priFun();




    /*•	Write c program to make function with parameter have data type integer
    and calling this function into Int Main and print the result with parameter pass with call.*/

    //calling
    priNumFunc(15);


    return 0;
}

void priFun()
{
    printf("Hello world! \n");
}

int priNumFunc(int data)
{

        printf("Your data is %d" , data);
}
