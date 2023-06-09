#include <stdio.h>

int a, b, c, d; /* Variables globales. */

void funcion1(int *b, int *c);
int funcion2(int c, int *d);

void main(void) {
  int a; /* Nota que a es una variable local. */
  a = 1; /* Se asigna un valor a la variable local a. */
  b = 2; /* Se asignan valores a las variables globales b, c y d. */
  c = 3;
  d = 4;
  printf("\n%d %d %d %d", a, b, c, d);
  funcion1(&b, &c);
  printf("\n%d %d %d %d", a, b, c, d);
  a = funcion2(c, &d);
  printf("\n%d %d %d %d", a, b, c, d);
}
void funcion1(int *b, int *c) {
  int d = 3; /* Se declara la variable local d. */
  a = 5; /* Observa que se hace referencia a la variable global a. */
  (*b)++;
  (*c) += 2;
  printf("\n%d %d %d %d", a, *b, *c, d);
}
int funcion2(int c, int *d) {
  int b = 7; /* Se declara la variable local b. */
  a++;
  b = 7;
  c += 3;
  (*d) += 2;
  printf("\n%d %d %d %d", a, b, c, *d);
  return (c);
}