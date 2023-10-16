#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*-------Here the variables for subjects marks ------*/
    int mark1 , mark2, mark3 , mark4 , mark5;
    /*-----summation variable----*/
    int sum;

    /*---Here is Float data-type for Average & percentage---*/
    float average , percentage;

    /*--start coding with endUser -----*/
    printf("Hello sire, welcome in our application. \n");

    /*---Here i will take grade from students-----*/
    printf("Enter mark for subject 1 out of 100 :");
    scanf("%d" , &mark1 );

    printf("Enter mark for subject 2 out of 100 :");
    scanf("%d" , &mark2 );

    printf("Enter mark for subject 3 out of 100 :");
    scanf("%d" , &mark3);

    printf("Enter mark for subject 4 out of 100 :");
    scanf("%d" , &mark4);

    printf("Enter mark for subject 5 out of 100 :");
    scanf("%d" , &mark5);

    /*---Here i will start coding for equations (summation & Average & percentages)-----*/

    sum = mark1 + mark2 + mark3 + mark4 + mark5;
    printf("Your summation of all subject is : %d \n" , sum );


    average = sum / 5;
    printf("Your average is : %0.2f \n" , average );


    percentage = (sum * 100) / 500;
    printf("Your percentage = : %0.4f" ,percentage );


    /*----Here i will start with IF-Conditions ---------*/
    /* 100%---A+  && 90% A && 80% B+  && 70% B- &&  60% C+  && 50 D*/

    if(percentage >= 90 && percentage <= 100)
    {
        printf("\n GPA = 4.0 ");
        printf("\n Grade : A+ ");

    }else if(percentage >= 80 && percentage <= 94)
    {

        printf("\n GPA = 3.7 ");
        printf("\n Grade : A ");

    }else if(percentage >= 80 && percentage <= 84)
    {
        printf("\n GPA = 3.3 ");
        printf("\n Grade : B+ ");

    }else if(percentage >= 70 && percentage <= 74)
    {
         printf("\n GPA = 2.7 ");
         printf("\n Grade : B- ");

    }else if(percentage >= 65 && percentage <= 69)
    {
         printf("\n GPA = 2.3 ");
         printf("\n Grade : C+ ");

    }else if(percentage >= 60 && percentage <= 64)
    {

         printf("\n GPA = 2.0 ");
         printf("\n Grade : C- ");

    }else if(percentage >= 55 && percentage <= 59)
    {

         printf("\n GPA = 1.7 ");
         printf("\n Grade : D+ ");

    }else if (percentage >= 50 && percentage <= 54 )
    {

         printf("\n GPA = 1.3 ");
         printf("\n Grade : D- ");

    }else if(percentage >= 0 && percentage <= 50)
    {

         printf("\n GPA = 0.0 ");
         printf("\n Grade : F ");
    }


    /*-----THE END of Application--------*/

    printf("\n Thank you for using our GPA Application.");


    return 0;
}

