#include <stdio.h>

const int TAM = 50;

void Lectura(int *vec, int t);
void Frecuencia(int a[], int p, int b[], int t);
void Impresion(int *vec, int t);
void Mayor(int *x, int t);

void main() {
  int cal[TAM], fre[6] = {0};

  Lectura(cal, TAM);
  Frecuencia(cal, TAM, fre, 6);

  printf("\nFrecuencia de Calificaciones\n");
  Impresion(fre, 6);
  Mayor(fre, 6);
}

void Lectura(int vec[], int t) {
  int i;

  for (i = 0; i < t; i++) {
    printf("Ingrese la calificación -0:5- del alumno %d: ", i + 1);
    scanf("%d", &vec[i]);
  }
}

void Impresion(int vec[], int t) {
  int i;

  for (i = 0; i < t; i++) {
    printf("\nVEC[%d]: %d", i, vec[i]);
  }
}

void Frecuencia(int a[], int p, int b[], int t) {
  int i;

  for (i = 0; i < p; i++) {
    if ((a[i] >= 0) && (a[i] < 6)) {
      b[a[i]]++;
    }
  }
}

void Mayor(int *x, int t) {
  int i, mfre = 0, mval = x[0];

  for (i = 1; i < t; i++) {
    if (mval < x[i]) {
      mfre = i;
      mval = x[i];
    }
  }

  printf("\n\nMayor frecuencia de calificaciones: %d \tValor: %d", mfre, mval);
}