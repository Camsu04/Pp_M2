#include <stdio.h>

const int MAX = 10;

void Lectura(int VEC[], int T);
void Imprime(int VEC[], int T);
void Producto(int *X, int *Y, int *Z, int T);

void main() {
  int VE1[MAX], VE2[MAX], VE3[MAX];

  Lectura(VE1, MAX);
  Lectura(VE2, MAX);
  Producto(VE1, VE2, VE3, MAX);

  printf("\nProducto de los Vectores\n");
  Imprime(VE3, MAX);
}

void Lectura(int VEC[], int T) {
  int I;

  for (I = 0; I < T; I++) {
    printf("Ingrese el elemento %d: ", I + 1);
    scanf("%d", &VEC[I]);
  }
}

void Imprime(int VEC[], int T) {
  int I;

  for (I = 0; I < T; I++) {
    printf("\nVEC[%d]: %d", I + 1, VEC[I]);
  }
}

void Producto(int *X, int *Y, int *Z, int T) {
  int I;

  for (I = 0; I < T; I++) {
    Z[I] = X[I] * Y[I];
  }
}