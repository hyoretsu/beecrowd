#include <stdio.h>

int main(void) {
  int n, i;
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
   int x, y, j, sums[n];
   scanf("%d %d", &x, &y);

   sums[i] = 0;

   for (j = (x + 1); j < y; j++) {
    if (j % 2 != 0) {
     sums[i] += j;
    }
   }

   for (j = (y + 1); j < x; j++) {
    if (j % 2 != 0) {
     sums[i] += j;
    }
   }

   printf("%d\n", sums[i]);
  }

  return 0;
}
