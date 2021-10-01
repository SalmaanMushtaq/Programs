#include <stdio.h>

int smallestElement(int *ptr, int size)
{
  int smallest = ptr[1];
  for (int i = 0; i < size; i++)
  {
    if(smallest > ptr[i])
    {
      smallest = ptr[i];
    }
  }
  return smallest;
  
}

int greatestElement(int *ptr, int size)
{
  int greatest = ptr[1];
  for (int i = 0; i < size; i++)
  {
    if(greatest< ptr[i])
    {
      greatest = ptr[i];
    }
  }
  return greatest;
  
}


int main()
{
  int arr[] = {2, 3, 1, 10, 5, 15, 16, 0, 35};
  int smallest = 0;
  int greatest = 0;
  int size = sizeof arr/ sizeof arr[0];
  
  smallest = smallestElement(arr, size);
  
  greatest = greatestElement(arr,size);
  
  printf("The smallest number is %d\n", smallest);

  printf("The greatest number is %d\n", greatest);

return 0;
}


