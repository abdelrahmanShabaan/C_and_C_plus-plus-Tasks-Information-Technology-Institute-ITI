#include <stdio.h>
#include <stdlib.h>
int main(){
            /* Hello Dr.Yara i'm Abdelrahman shaaban*/
            /* This is the first assignment of today / 13/8/2023*/
   // Here i will make 2D Array with indexing 3 for student & 4 for Subjects
   int ar[3][4];
   // Here i will make some variables i will using it for Nested loop
   int row , col , count =1 ;
   int i , s;
   // Here i will make variables one for sum & one for average
   int sum;
    float average;

    // Here first Nested loop stat with [row] then [column] to make count
   for(row =0; row < 3; row++)
   {
       for(col =0; col < 4; col++)
   { ar[row][col] = count;
       count++; }   }

    // Here second Nested loop  to make reverse of Array by start with Column then Row
   for(col =0; col <4; col++)
   { for(row=0; row <3; row++)
       {
           printf("%d \t" , ar[row][col]);
       }  printf("\n");}

   // Here i will using sum to make sum of all indexing at the end
   for(i=0; i <3; i++)
   {
       sum =0;

       for(s=0; s<4; s++)
       {
           sum = sum + ar[i][s];
       } printf("sum is  %d \n" , sum );   }

    // Here i will using Nested loop to make average with float as Data-type to divide by sum over Array
    for(i=0; i <3; i++)
   {

       for(s=0; s<4; s++)
       {
           average = sum / ar[i][s];
       }     printf("average is  %.2f \n" , average );}

    // The Last return of my Main Function
    return 0;
}
