#include <stdio.h>

const int TAM = 100;
void Imprime(int *primos, int t); /* Prototipos de funciones. */
void Primo(int a, int *b);
void main(void) {
  int primos[TAM] = {1, 2};
  int flag, j = 2, pri = 3;
  while (j <= TAM) {
    flag = 1;
    Primo(pri, &flag); /* Se llama a la función que determina si PRI es
      primo. */
    if (flag) /* Si flag es 1, entonces PRI es primo. */ {
      primos[j] = pri;
      j++;
    }
    pri += 2;
  }
  Imprime(primos, TAM);
}
void Primo(int a, int *b) {
  int d = 3;
  while (*b && (d < (a / 2))) {
    if ((a % d) == 0) {
      *b = 0;
    }
    d++;
  }
}
void Imprime(int primos[], int t) {
  int i;
  for (i = 0; i < t; i++) {
    printf("\nPrimos[%d]: %d", i, primos[i]);
  }
}