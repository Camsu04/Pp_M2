#include <stdio.h>

void main(void) {
  int CLA, TIE;
  float COS;

  printf("Ingresa la clave y el tiempo: ");
  scanf("%d %d", &CLA, &TIE);

  switch (CLA) {
    case 1:
      COS = TIE * 0.13 / 60.0;
      break;
    case 2:
      COS = TIE * 0.11 / 60.0;
      break;
    case 5:
      COS = TIE * 0.22 / 60.0;
      break;
    case 6:
      COS = TIE * 0.19 / 60.0;
      break;
    case 7:
    case 9:
      COS = TIE * 0.17 / 60.0;
      break;
    case 10:
      COS = TIE * 0.20 / 60.0;
      break;
    case 15:
      COS = TIE * 0.39 / 60.0;
      break;
    case 20:
      COS = TIE * 0.28 / 60.0;
      break;
    default:
      COS = -1;
      break;
  }

  if (COS != -1) {
    printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f\n", CLA, TIE, COS);
  } else {
    printf("\nError en la clave\n");
  }
}
