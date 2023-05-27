#include <stdio.h>

void main(void) {
  int CLA, CAT, ANT, RES;

  printf("Ingrese la clave, categoría y antigüedad del trabajador:\n");
  scanf("%d %d %d", &CLA, &CAT, &ANT);

  switch (CAT) {
    case 3:
    case 4:
      if (ANT >= 5) {
        RES = 1;
      } else {
        RES = 0;
      }
      break;
    case 2:
      if (ANT >= 7) {
        RES = 1;
      } else {
        RES = 0;
      }
      break;
    default:
      RES = 0;
      break;
  }

  if (RES) {
    printf("El trabajador con clave %d reúne las condiciones para el puesto\n", CLA);
  } else {
    printf("El trabajador con clave %d no reúne las condiciones para el puesto\n", CLA);
  }
}
