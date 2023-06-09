#include <stdio.h>
#include <math.h>

void parimp(int, int *, int *);
void main(void) {
  int i, n, num, par = 0, imp = 0;
  printf("Ingresa el número de datos: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    printf("Ingresa el número %d: ", i);
    scanf("%d", &num);
    parimp(num, &par, &imp);
  }
  printf("\nNúmero de pares: %d\n", par);
  printf("\nNúmero de impares: %d\n", imp);
}
void parimp(int num, int *p, int *i) {
  int res;
  res = pow(-1, num);
  if (res > 0) {
    *p += 1;
  } else {
    *i += 1;
  }
}