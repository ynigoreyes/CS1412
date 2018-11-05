#include <stdio.h>
#define N 5
#define M 5

void delete_row(int arr[N][M], int row)
{
  for (int *i = &arr[0][0]; i <= &arr[N-1][M-1] ;i++)
  {
    printf("%d\n", **arr);
  }
}

int main()
{
  int arr[N][M] = {0}; // 2D array
  delete_row(arr, 3);
  return 1;
}
