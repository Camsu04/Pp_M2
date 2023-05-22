#include <stdio.h>

/* Estancia
El programa, al recibir como dato la superficie de una estancia expresada
en acres, la convierte a hectáreas.
ECA: variable de tipo real. */

void main() {
  float ECA;

  // Solicitamos al usuario que ingrese la extensión de la estancia
  printf("Ingrese la extensión de la estancia: ");
  scanf("%f", &ECA);

  // Convertimos los acres a hectáreas
  ECA = ECA * 0.404686;

  // Imprimimos el resultado
  printf("\nExtensión de la estancia en hectáreas: %5.2f\n", ECA);
}
