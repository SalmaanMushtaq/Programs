#include <stdio.h>
int AddElements(int *ptr, int size)
{
  int total = 0;
  for( int i = 0; i<size; i++)
    {
      total = total + ptr[i];
    }
  return total;
}


int  main()
{
  int arr[] = { 1, 3 , 4, 5, 6, 10, 15, 17, 18, 25, 15 };
  int size = sizeof arr/sizeof arr[0];
 
  printf("Sum of  array is= %d\n", AddElements(arr,size));

  return 0;
}
