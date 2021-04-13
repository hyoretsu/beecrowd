#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  int abGreatest = (a + b + abs(a - b)) / 2;
  printf("%d eh o maior\n", (abGreatest + c + abs(abGreatest - c)) / 2);

  return 0;
}
