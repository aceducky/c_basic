#include <stdio.h>
#include <stdlib.h>
void input(int **arr, int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", *(arr + i) + j);
    }
  }
}
int **give2dArray(int r, int c)
{
  int **arr = (int **)malloc(r * sizeof(int));
  for (int i = 0; i < r; i++)
  {
    arr[i] = (int *)malloc(c * sizeof(int));
  }
  input(arr, r, c);
  return arr;
}
void print2dArray(int **arr, int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d ", *(*(arr + i) + j));
    }
    printf("\n");
  }
}
void sum2dArray(int **arr1, int **arr2, int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d ", arr1[i][j] + arr2[i][j]);
    }
    printf("\n");
  }
}

void callSum2dArrays()
{
  int r, c;
  scanf("%d%d", &r, &c);
  int **arr1 = give2dArray(r, c);
  int **arr2 = give2dArray(r, c);
  sum2dArray(arr1, arr2, r, c);
  free(arr1);
  arr1 = NULL;
  free(arr2);
  arr2 = NULL;
}

void transpose(int **arr, int r, int c)
{
  int **transpose_matrix = give2dArray(r, c);
  for (int i = 0; i < c; i++)
  {
    for (int j = 0; j < c; j++)
    {
      transpose_matrix[j][i] = arr[i][j];
    }
  }
  print2dArray(transpose_matrix, r, c);
  free(transpose_matrix);
}

void callTranspose()
{
  int r, c;
  scanf("%d%d", &r, &c);
  int **arr = give2dArray(r, c);
  transpose(arr, r, c);
  free(arr);
}

void diagonalSum(int **arr, int r, int c)
{
  int diagonal_sum = 0, anti_diagonal_sum = 0;
  for (int i = 0; i < r; i++)
  {
    diagonal_sum = diagonal_sum + arr[i][i];
    anti_diagonal_sum = anti_diagonal_sum + arr[i][r - i - 1];
  }
  printf("Diagonal Sum: %d, Anti Diagonal Sum: %d\n", diagonal_sum, anti_diagonal_sum);
}

void callDiagonalSum()
{
  int r, c;
  scanf("%d%d", &r, &c);
  int **arr = give2dArray(r, c);
  diagonalSum(arr, r, c);
  free(arr);
}

int main(int argc, char *argv[])
{
  // callSum2dArrays();
  // callTranspose();
  // callDiagonalSum();
  return 0;
}
