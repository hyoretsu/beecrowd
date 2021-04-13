#include <stdio.h>

int main(void) {
  int id1, quantity1, id2, quantity2;
  float price1, price2;

  scanf("%d %d %f", &id1, &quantity1, &price1);
  scanf("%d %d %f", &id2, &quantity2, &price2);
  printf("VALOR A PAGAR: R$ %.2f\n", (price1 * quantity1) + (price2 * quantity2));

  return 0;
}
