#include <stdio.h>

int Suma(int x, int y) {
  /* La función Suma regresa la suma de los parámetros de tipo entero x y y. */
  return (x + y);
}

int Resta(int x, int y) {
  /* Esta función regresa la resta de los parámetros de tipo entero x y y. */
  return (x - y);
}

int Control(int (*apf)(int, int), int x, int y) {
  /* Esta función recibe como parámetro otra función —la dirección— y dependiendo de cuál sea ésta, llama a la función Suma o Resta. */
  int res;
  res = (*apf)(x, y); /* Se llama a la función Suma o Resta. */
  return (res);
}

void main(void) {
  int r1, r2;
  r1 = Control(Suma, 15, 5); /* Se pasa como parámetro la función Suma. */
  r2 = Control(Resta, 10, 4); /* Se pasa como parámetro la función Resta. */
  printf("\nResultado 1: %d\n", r1);
  printf("\nResultado 2: %d\n", r2);
}