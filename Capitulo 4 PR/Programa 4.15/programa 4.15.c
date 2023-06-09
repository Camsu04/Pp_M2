#include <stdio.h>

int Productoria(int);
void main(void) {
  int num;
  /* Se escribe un do-while para verificar que el número del cual se
    quiere calcular la productoria sea correcto. */
  do {
    printf("Ingresa el número del cual quieres calcular la productoria: ");
    scanf("%d", &num);
  } while (num > 100 || num < 1);
  printf("\nLa productoria de %d es: %d", num, Productoria(num));
}
int Productoria(int n) {
  int i, pro = 1;
  for (i = 1; i <= n; i++) {
    pro *= i;
  }
  return pro;
}