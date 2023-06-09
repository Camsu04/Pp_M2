#include <stdio.h>

int cubo(int); /* Prototipo de función. El parámetro es de tipo entero. */

void main(void) {
  int I;
  for (I = 1; I <= 10; I++) {
    printf("\nEl cubo de %d es: %d\n", I, cubo(I));
  }
}

int cubo(int K) { /* K es un parámetro por valor de tipo entero. */
  /* La función calcula el cubo del parámetro K. */
  return (K * K * K);
}