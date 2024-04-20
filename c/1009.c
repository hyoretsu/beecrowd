#include <stdio.h>

int main(void) {
  char name;
  double salary, salesBonus;

  scanf("%s", &name);
  scanf("%lf", &salary);
  scanf("%lf", &salesBonus);
  printf("TOTAL = R$ %.2lf\n", salary + (0.15 * salesBonus));

  return 0;
}
