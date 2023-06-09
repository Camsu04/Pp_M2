#include <stdio.h>

void Lectura(int *a, int t); /* Prototipos de funciones. */
void Imprime(int *a, int t);
void Elimina(int *a, int *t);

void main(void) {
  int tam, arre[100];

  do {
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tam);
  } while (tam > 100 || tam < 1);
  Lectura(arre, tam);
  Elimina(arre, &tam);

  Imprime(arre, tam);
}

void Lectura(int a[], int t) {
  printf("\n");
  int i;
  for (i = 0; i < t; i++) {
    printf("Ingrese el elemento %d: ", i + 1);
    scanf("%d", &a[i]);
  }
}

void Imprime(int a[], int t) {
  int i;
  for (i = 0; i < t; i++) {
    printf("\nA[%d]: %d", i, a[i]);
  }
}

void Elimina(int a[], int *t) {
  int i = 0, k, l;
  while (i < (*t - 1)) {
    k = i + 1;
    while (k <= (*t - 1)) {
      if (a[i] == a[k]) {
        for (l = k; l < (*t - 1); l++) {
          a[l] = a[l + 1];
        }
        (*t) = (*t) - 1;
      } else {
        k++;
      }
    }
    i++;
  }
}