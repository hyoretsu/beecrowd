#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
 int count;
 scanf("%d", &count);

 for (int i = 0; i < count; i++) {
   char text1[50], text2[50];
   scanf("%s %s", text1, text2);

   int max, textLength1 = strlen(text1), textLength2 = strlen(text2);

   (textLength1 > textLength2) ? (max = textLength1) : (max = textLength2);

   for (int j = 0; j < max; j++) {
    (j < textLength1) && printf("%c", text1[j]);
    (j < textLength2) && printf("%c", text2[j]);
   }
   printf("\n");
 }

 return 0;
}
