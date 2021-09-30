#include <stdio.h>
int main ()
{
  int total = 0;
  int arr[] = { 1, 2, 3, 4, 5, 6, 7};
  int size = sizeof arr/sizeof arr[0];
  printf("Size is %i\n", size);
  for(int i = 0; i < size; i++)
    total = total + arr[i];
  printf("Sum is =  %d\n ", total);
}
