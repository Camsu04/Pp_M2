#include <stdio.h>

int A = 3;
int B = 7;
int C = 4; /* Global variables. */
int D = 2;
void main(void) {
  A = F1(C, &D);
  printf("\n%d %d %d %d", A, B, C, D);
  C = 3;
  C = F1(A, &C);
  printf("\n%d %d %d %d", A, B, C, D);
}
int F1(int X, int *Y) {
  int A;
  A = X * *Y;
  C++;
  B += *Y;
  printf("\n%d %d %d %d", A, B, C, D);
  (*Y)--;
  return (C);
}