#include <stdio.h>

int odd_sums(int arr[], int size)
{
   int sum = 0;

   for(int i=0; i<size ; i++)
    {
        if(arr[i] % 2 == 1)
        {
            sum += arr[i];
        }
   }

   return sum;
}
int main()
{
    int array_list[] = {30,12,51,17,45,62};

    int n = sizeof(array_list)/sizeof(array_list[0]);

    printf("Sum of odd values is : %d",odd_sums(array_list,n));

    return 0;
}
