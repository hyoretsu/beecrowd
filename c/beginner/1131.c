#include <stdio.h>
#include <string.h>

int main(void) {
 int interGols, gremioGols, grenais = 0, cont = 1;
 int inter = 0, gremio = 0, ties = 0;
 char winnerMessage[19];

 while (cont == 1) {
  scanf("%d %d", &interGols, &gremioGols);
  printf("Novo grenal (1-sim 2-nao)\n");
  scanf("%d", &cont);

  if (interGols > gremioGols) {
   inter += 1;
   strcpy(winnerMessage, "Inter venceu mais");
  } else if (gremioGols > interGols) {
   gremio += 1;
   strcpy(winnerMessage, "Gremio venceu mais");
  } else {
   ties += 1;
   strcpy(winnerMessage, "Nao houve vencedor");
  };

  grenais += 1;
 }

 printf("%d grenais\n", grenais);
 printf("Inter:%d\n", inter);
 printf("Gremio:%d\n", gremio);
 printf("Empates:%d\n", ties);
 printf("%s\n", winnerMessage);

 return 0;
}
