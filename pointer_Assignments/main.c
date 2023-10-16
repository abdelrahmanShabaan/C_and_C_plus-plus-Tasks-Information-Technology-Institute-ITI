#include <stdio.h>


int main()
{

  int arr[10],sum;
  int* ptr;



          for(int i=0; i<10; i++)
          {
            printf("Enter the number of %d : " ,i);
            scanf("%d",&arr[i]);
            ptr = &arr[i];
          }


          //calculating sum of numbers
           sum =0;
          for(int i=0; i<10; i++)
          {
            sum+=arr[i];
            ptr+=arr[i];
          }

          printf("Sum of array numbers is: %d \n",sum);
          printf("sum of pointers of array  is: %p", ptr);


  return 0;
}
