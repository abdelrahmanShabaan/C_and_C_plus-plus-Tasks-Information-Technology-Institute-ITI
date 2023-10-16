#include <stdio.h>
#include <stdlib.h>

int main()
{

     /* Hello Dr.Yara i'm Abdelrahman shaaban*/
     /* This is the Third assignment of today / 13/8/2023*/


     // That's simple variables with Data-type char
     char fullName [100];
     char firstname[50];
     char lastname [50];

     //make display text show for endUser to get value of first name
     printf("Hello sir, Please enter first name : ");
     scanf("%s" , &firstname);

     //make display text show for endUser to get value of last name
     printf("Hello sir, Please enter last name : ");
     scanf("%s" , &lastname);



     //Here i will make strcat function built in c language
     strcat(fullName , " ");
     strcat(fullName , firstname);
     strcat(fullName , lastname);


     printf("%s" , fullName);
    return 0;
}
