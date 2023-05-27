#include <stdio.h>

void main(void) {
  int NUM;

  printf("Introduce el número: ");
  scanf("%d", &NUM);

  if (NUM == 0) {
    printf("\nNulo");
  } else {
    if (NUM % 2 == 0) {
      printf("\nPar");
    } else {
      printf("\nImpar");
    }
  }
}