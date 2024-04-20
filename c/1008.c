#include <stdio.h>

int main(void) {
  int employeeNumber, hours;
  float wage;

  scanf("%d", &employeeNumber);
  scanf("%d", &hours);
  scanf("%f", &wage);
  printf("NUMBER = %d\n", employeeNumber);
  printf("SALARY = U$ %.2f\n", wage * hours);

  return 0;
}
