#include <stdio.h>

int main(void) {
 int count = 1;

 while (count) {
  scanf("%d", &count);

  for (int i = 0; i < count; i++) {
    printf("%d%s", i + 1, (i == count - 1) ? "\n" : " ");
  }
 }

 return 0;
}
