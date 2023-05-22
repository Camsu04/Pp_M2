#include <stdio.h>
#include <math.h>

/* Área del triángulo
El programa, al recibir los tres lados de un triángulo, calcula su área.
LA1, LA2, LA3, AUX y ARE: variables de tipo real. */

void main() {
  float LA1, LA2, LA3, AUX, ARE;

  // Solicitamos al usuario que ingrese los lados del triángulo
  printf("Ingrese los lados del triángulo: ");
  scanf("%f %f %f", &LA1, &LA2, &LA3);

  // Calculamos el semiperímetro
  AUX = (LA1 + LA2 + LA3) / 2;

  // Calculamos el área del triángulo
  ARE = sqrt(AUX * (AUX - LA1) * (AUX - LA2) * (AUX - LA3));

  // Imprimimos el área del triángulo
  printf("\nEl área del triángulo es: %6.2f\n", ARE);
}
