#include <stdio.h>

int main(void) {
  int evens = 0, odds = 0, positives = 0, negatives = 0;
  int numbers[5];

  for (int i = 0; i < 5; i++) {
   scanf("%d", &numbers[i]);

   if (numbers[i] % 2 == 0) {
    evens += 1;
   } else {
    odds += 1;
   }

   if (numbers[i] > 0) {
    positives += 1;
   } else if (numbers[i] < 0) {
    negatives += 1;
   }
  }

  printf("%d valor(es) par(es)\n", evens);
  printf("%d valor(es) impar(es)\n", odds);
  printf("%d valor(es) positivo(s)\n", positives);
  printf("%d valor(es) negativo(s)\n", negatives);

  return 0;
}
