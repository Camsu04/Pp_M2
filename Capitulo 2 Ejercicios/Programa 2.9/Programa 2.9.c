#include <stdio.h>
#include <math.h>

void main(void) {
  float RES;
  int R, T, Q;

  printf("Introduzca los valores de R, T y Q: ");
  scanf("%d %d %d", &R, &T, &Q);

  RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);

  if (RES < 820) {
    printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);
  } else {
    printf("\nLos valores no satisfacen la expresión");
  }
}