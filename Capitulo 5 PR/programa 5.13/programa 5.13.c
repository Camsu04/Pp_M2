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
  int i, j, menor, pos;
  for (i = 0; i < t - 1; i++) {
    menor = a[i];
    pos = i;
    for (j = i + 1; j < t; j++) {
      if (a[j] < menor) {
        menor = a[j];
        pos = j;
      }
    }
    int temp = a[i];
    a[i] = menor;
    a[pos] = temp;
  }
}