#include <stdio.h>

void main(void) {
  int MAT, CAR, SEM;
  float PRO;

  printf("Ingrese la identificación del estudiante: ");
  scanf("%d", &MAT);

  printf("Ingrese la especialidad del estudiante (1-Industrial 2-Telemática 3-Informática 4-Mecánica): ");
  scanf("%d", &CAR);

  printf("Ingrese el semestre del estudiante: ");
  scanf("%d", &SEM);

  printf("Ingrese el promedio del estudiante: ");
  scanf("%f", &PRO);

  switch (CAR) {
    case 1:
      if (SEM >= 6 && PRO >= 8.5) {
        printf("\n%d %d %5.2f", MAT, CAR, PRO);
      } else {
        printf("\n El promedio o el semestre no cumplen los requisitos");
      }
      break;
    case 2:
      if (SEM >= 5 && PRO >= 9.0) {
        printf("\n%d %d %5.2f", MAT, CAR, PRO);
      } else {
        printf("\n El promedio o el semestre no cumplen los requisitos");
      }
      break;
    case 3:
      if (SEM >= 6 && PRO >= 8.8) {
        printf("\n%d %d %5.2f", MAT, CAR, PRO);
      } else {
        printf("\n El promedio o el semestre no cumplen los requisitos");
      }
      break;
    case 4:
      if (SEM >= 7 && PRO >= 9.0) {
        printf("\n%d %d %5.2f", MAT, CAR, PRO);
      } else {
        printf("\n El promedio o el semestre no cumplen los requisitos");
      }
      break;
    default:
      printf("\n Error en la carrera");
      break;
  }
}