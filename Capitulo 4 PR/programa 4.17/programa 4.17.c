#include <stdio.h>

void Mayor(float, float, float);
void main(void) {
  int i;
  float gol, pac, car, agol = 0, apac = 0, acar = 0;
  for (i = 1; i <= 12; i++) {
    printf("\n\nIngresa las lluvias del mes %d\n", i);
    printf("Regiones Golfo, Pacífico y Caribe: ");
    scanf("%f %f %f", &gol, &pac, &car);
    agol += gol;
    apac += pac;
    acar += car;
  }
  printf("\n\nPromedio de lluvias Región Golfo: %6.2f", (agol / 12));
  printf("\nPromedio de lluvias Región Pacífico: %6.2f\n", (apac / 12));
  printf("Promedio de lluvias Región Caribe: %6.2f\n", (acar / 12));
  Mayor(agol, apac, acar);
}

void Mayor(float r1, float r2, float r3) {
  if (r1 > r2 && r1 > r3) {
    printf("\nRegión con mayor promedio: Región Golfo. Promedio: %6.2f", r1 / 12);
  } else if (r2 > r1 && r2 > r3) {
    printf("\nRegión con mayor promedio: Región Pacífico. Promedio: %6.2f", r2 / 12);
  } else {
    printf("\nRegión con mayor promedio: Región Caribe. Promedio: %6.2f", r3 / 12);
  }
}