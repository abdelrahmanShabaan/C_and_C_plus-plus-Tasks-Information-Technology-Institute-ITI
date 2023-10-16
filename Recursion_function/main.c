#include <stdio.h>
#include <stdlib.h>

int fact(int numberOfFactorial);

int main()
{
    // create two variable
    int numberScaned , factorial;

    printf("Hello sir ,please enter number of factorials : ");
    scanf("%d" , &numberScaned); // !5


    //calling function fact() and save in variable name facroirals
    factorial = fact(numberScaned);
        printf("factoral of %d : %d" , numberScaned ,factorial );



    return 0;
}



//create recursion function
int fact(int numberOfFactorial)
{

    if(numberOfFactorial ==0)
    {
        return (1); //stop for recursion
    }else
    {
        return (numberOfFactorial*fact(numberOfFactorial-1));
    }

}
