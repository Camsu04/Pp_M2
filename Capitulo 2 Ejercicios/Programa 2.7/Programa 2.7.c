#include <stdio.h>

/* Ventas descendentes.
El programa, cuando se le dan tres valores como datos que representan las ventas
➥de los vendedores de una tienda de discos, escribe las ventas en
➥orden descendente.
P, S y R: variables de tipo real. */
void main(void) {
  float P, S, R;

  printf("\nIngrese las ventas de los tres vendedores: ");
  scanf("%f %f %f", &P, &S, &R);

  // Encuentra el valor máximo
  float max = P;
  if (S > max) {
    max = S;
  }
  if (R > max) {
    max = R;
  }

  // Encuentra el segundo valor máximo
  float secondMax = P;
  if (S > secondMax && S != max) {
    secondMax = S;
  }
  if (R > secondMax && R != max) {
    secondMax = R;
  }

  // Encuentra el valor mínimo
  float min = P;
  if (S < min) {
    min = S;
  }
  if (R < min) {
    min = R;
  }

  // Imprime las ventas en orden descendente
  printf("\n\nEl orden es: %8.2f %8.2f %8.2f\n", max, secondMax, min);
}
