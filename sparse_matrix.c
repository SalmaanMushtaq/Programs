#include <stdio.h>
#define ROWS 4
#define COLS 4

/*This C program is used to check if a matrix is a sparse Matrix. If the number of zeros in a matrix exceeds (ROWS*COLS)/2, where ROWS, COLS is the dimension of the matrix, matrix is sparse matrix. Sparse matrix has more zero elements than nonzero elements.
*/
 
void findSparseMatrix(int matrix[ROWS][COLS]);
void printmatrix(int matrix[ROWS][COLS]);
int main()
{
  int matrix[ROWS][COLS];
  printf("Enter %d elements of your matrix \n", ROWS*COLS);
  for(int i = 0; i < ROWS; i++)
  {
    for(int j = 0; j < COLS; j++)
    {
     //scanf(" %d", &matrix[i][j]);
     matrix[i][j] = i * j;
     //matrix[i][j] = 0;
       
    }
  }
  printmatrix(matrix);
  findSparseMatrix(matrix);
  return 0;
}

void printmatrix(int matrix[ROWS][COLS])
{
  for(int i = 0; i<ROWS; i++)
  {
   for(int j = 0; j<COLS; j++)
   { 
   printf(" %d", matrix[i][j]);
   }
    printf(" \n");
  }
 } 
 
void findSparseMatrix(int matrix[ROWS][COLS])
{
  int sparse_counter = 0;
    for(int i = 0; i < ROWS; i++)
    {
      for(int j = 0; j < COLS; j++)
      {
        if (matrix[i][j] == 0)
        {
            ++sparse_counter;
         
          }
      }
    }
  if (sparse_counter > ((ROWS * COLS )/ 2))
    printf("The given matrix is sparse \n");
  else
    printf("The given matrix is not a Sparse Matrix \n"); 
  printf("There are %d number of zeros. \n", sparse_counter);
}
