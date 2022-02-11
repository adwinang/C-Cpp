#include <stdio.h>

int main()
{
  int A[] = {2, 4, 6, 8, 10, 12, 14, 16};
  printf("%lu\n", sizeof(A));

  for (int i = 0; i < 8; i++)
  {
    printf("%d\n", A[i]);
  }
}