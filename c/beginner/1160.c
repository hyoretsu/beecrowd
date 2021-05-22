#include <stdio.h>

int main(void) {
 int cases = 1;

 scanf("%d", &cases);

 for (int i = 0; i < cases; i++) {
  int population1, population2, years = 0;
  double growth1, growth2;
  scanf("%d %d %lf %lf", &population1, &population2, &growth1, &growth2);

  while (population1 <= population2 && years <= 100) {
   population1 += population1 * (growth1/100);
   population2 += population2 * (growth2/100);
   years += 1;
  }

  if (years <= 100) {
   printf("%d anos.\n", years);
  } else {
   printf("Mais de 1 seculo.\n");
  }
 }

 return 0;
}
