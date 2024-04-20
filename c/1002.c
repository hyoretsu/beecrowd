#include <math.h>
#include <stdio.h>

#define pi 3.14159

int main(void) {
  double r;

  scanf("%lf", &r);
  printf("A=%.4lf\n", pi * pow(r, 2));

  return 0;
}
