#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int totalDistance;
  float fuelSpent;

  scanf("%d", &totalDistance);
  scanf("%f", &fuelSpent);

  printf("%.3f km/l\n", totalDistance / fuelSpent);

  return 0;
}
