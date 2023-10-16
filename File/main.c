#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fptr;

    //create file
    fptr = fopen("mego.txt" , "r");



    //close file
    fclose(fptr);

    return 0;
}
