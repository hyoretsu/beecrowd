#include <stdio.h>

int main(void) {
  int repeater;
  scanf("%d", &repeater);

  for (int i = 0; i < 1000; i += repeater) {
   for (int j = 0; (j < repeater && (i + j) < 1000); j++) {
    printf("N[%d] = %d\n", i + j, j);
   }
  }

  return 0;
}
