#include <stdio.h>

void f1(void);
int K = 5;

void main(void) {
  int I;
  for (I = 1; I <= 3; I++) {
    f1();
  }
}

void f1(void) {
  int K = 2;
  printf("\n\nEl valor de la variable local es: %d\n", K);
  K = K + ::K; /* Uso de ambas variables. */
  printf("\n\nEl valor de la variable global es: %d\n", ::K);
}