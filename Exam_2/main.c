#include <stdio.h>
#include <strings.h>

int main() {
  int numeric[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int *q;
  q = numeric;
  q = q + 0;
  printf("%d\n", *q);
  return 0;
}
