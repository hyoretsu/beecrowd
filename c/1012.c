#include <math.h>
#include <stdio.h>

#define pi 3.14159

int main(void) {
  double a, b, c;

  scanf("%lf %lf %lf", &a, &b, &c);
  printf("TRIANGULO: %.3lf\n", (a * c) / 2);
  printf("CIRCULO: %.3lf\n", pi * pow(c, 2));
  printf("TRAPEZIO: %.3lf\n", ((a + b) / 2) * c);
  printf("QUADRADO: %.3lf\n", pow(b, 2));
  printf("RETANGULO: %.3lf\n", a * b);

  return 0;
}
