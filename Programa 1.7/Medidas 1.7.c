#include <stdio.h>

/* Medidas.
El programa, al recibir como datos la longitud y el peso de un objeto
expresados en pies y libras, calcula los datos de este objeto pero en
metros y kilogramos, respectivamente. PIE, LIB, MET y KIL: variables de tipo real. */

void main(void) {
  float pie, libra, metro, kilogramo;

  printf("Ingrese los datos del objeto: ");
  scanf("%f %f", &pie, &libra);

  metro = pie * 0.09290;
  kilogramo = libra * 0.45359;

  printf("\nDatos del objeto\nLongitud: %5.2f\tPeso: %5.2f\n", metro, kilogramo);
}
