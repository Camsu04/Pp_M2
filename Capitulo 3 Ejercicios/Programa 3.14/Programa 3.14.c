#include <stdio.h>

int main() {
  int vote, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, nu = 0, svo;
  float po1, po2, po3, po4, po5, pon;

  printf("Ingrese el primer voto:\n ");
  scanf("%d", &vote);

  while (vote) {
    switch (vote) {
      case 1:
        c1++;
        break;
      case 2:
        c2++;
        break;
      case 3:
        c3++;
        break;
      case 4:
        c4++;
        break;
      case 5:
        c5++;
        break;
      default:
        nu++;
        break;
    }
    printf("Ingrese el siguiente voto –0 para terminar–\n: ");
    scanf("%d", &vote);
  }

  svo = c1 + c2 + c3 + c4 + c5 + nu;
  po1 = ((float)c1 / svo) * 100;
  po2 = ((float)c2 / svo) * 100;
  po3 = ((float)c3 / svo) * 100;
  po4 = ((float)c4 / svo) * 100;
  po5 = ((float)c5 / svo) * 100;
  pon = ((float)nu / svo) * 100;

  printf("\nTotal de votos\n: %d", svo);
  printf("\n\nCandidato 1\n: %d votos-- Porcentaje\n: %5.2f", c1, po1);
  printf("\nCandidato 2\n: %d votos-- Porcentaje\n: %5.2f", c2, po2);
  printf("\nCandidato 3\n: %d votos-- Porcentaje\n: %5.2f", c3, po3);
  printf("\nCandidato 4\n: %d votos-- Porcentaje\n: %5.2f", c4, po4);
  printf("\nCandidato 5\n: %d votos-- Porcentaje\n: %5.2f", c5, po5);
  printf("\nNulos\n: %d votos-- Porcentaje\n: %5.2f", nu, pon);

  return 0;
}
