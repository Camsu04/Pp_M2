#include <stdio.h>

void Lectura(int *a, int t);
void Ordena(int *a, int t);
void Imprime(int *a, int t);
void main(void) {
  int tam, vec[MAX];
  do {
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tam);
  } while (tam > MAX || tam < 1);
  Lectura(vec, tam);
  Ordena(vec, tam);
  Imprime(vec, tam);
}
void Lectura(int *a, int t) {
  int i;
  for (i = 0; i < t; i++) {
    printf("Ingrese el elemento %d: ", i + 1);
    scanf("%d", &a[i]);
  }
}
void Imprime(int *a, int t) {
  int i;
  for (i = 0; i < t; i++) {
    printf("\nA[%d]: %d", i, a[i]);
  }
}
void Ordena(int *a, int t) {
  int i, j, aux;
  for (i = 1; i < t; i++) {
    aux = a[i];
    j = i - 1;
    while (j >= 0 && aux < a[j]) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = aux;
  }
}