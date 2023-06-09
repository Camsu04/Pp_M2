#include <stdio.h>

int cubo(int n) {
  return n * n * n;
}

void main() {
  int i;
  for (i = 1; i <= 10; i++) {
    printf("El cubo de %d es: %d\n", i, cubo(i));
  }
}
