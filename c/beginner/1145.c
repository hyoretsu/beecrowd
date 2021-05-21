#include <stdio.h>

int main(void) {
 int count, max;

 scanf("%d %d", &count, &max);

 for (int i = 1; i <= max; i++) {
  printf("%d%s", i, (i % count == 0) ? "\n" : " ");
 }

 return 0;
}
