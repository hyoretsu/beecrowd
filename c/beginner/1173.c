#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < 10; i++) {
   printf("N[%d] = %d\n", i, n);
   n *= 2;
  }

  return 0;
}
