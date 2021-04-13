#include <stdio.h>

int main(void) {
  float a, b;

  scanf("%f", &a);
  scanf("%f", &b);
  printf("MEDIA = %.5f\n", ((3.5 * a)  + (7.5 * b)) / (3.5 + 7.5));

  return 0;
}
