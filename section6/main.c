#include <stdio.h>
#include <stdlib.h>

int main()
{

        /* Write C Program to Print an Integer(Entered by the User)*/

        //declearation
        int number;

        //initilization
        printf("Hello sir, Please enter a number :");
        scanf("%d" , &number);

        //print value
        printf("the number you enter is : %d \n" ,number);




        /*Write C program to print sum of two variables (entered by the endUser)*/

        int x;
        int y;


        //save first number in & address of memeory
        printf("hello sir,please enter first number :");
        scanf("%d" ,&x);

        //save second number in & address of memeory
        printf("hello sir,please enter second number :");
        scanf("%d" ,&y);


        int sum = x + y;

        //print of sum
        printf("the sum of two number that entered by user is : %d" , sum);




        /* Write C program to print char (Entered by the user)*/

        char name_Char;

        printf("Hello sir, please enter char :");
        scanf("%c" , &name_Char);

        printf("the endUser enter char : %c" , name_Char);








    return 0;
}
