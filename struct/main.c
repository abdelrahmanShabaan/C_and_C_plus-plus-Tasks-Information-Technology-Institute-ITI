#include <stdio.h>
#include <stdlib.h>

typedef struct books
{
    int id;
    char author[20];
    float salary;

}books;

//protoype to declear the function
void details_print(books pp);


int main()
{
      books b2;

      //calling
     details_print(b2);


    return 0;
}




void details_print(books pp)

{
    //call for struct (books) -- b2
    books b2;

    // scan for member details for second book

     printf("please enter second id of book:\n");
    scanf("%d" , &b2.id);
    printf("please enter name of Author of second book:\n");
    scanf("%s" ,&b2.author );
    printf("please enter name of salary of second book:\n");
    scanf("%f" , &b2.salary);


    printf("your second id of first book is : %d \n", b2.id );
    printf("your second author name of first book is : %s \n", b2.author  );
    printf("your second salary of first book is : %.2f \n", b2.salary );


};


