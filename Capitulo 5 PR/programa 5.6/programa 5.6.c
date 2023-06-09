#include <stdio.h>
#include <math.h>

const int MAX = 100;

double Suma(float *a, int t);
void main() {
  float vec[MAX];
  double res;
  Lectura(vec, MAX);
  res = Suma(vec, MAX);
  /* Se llama a la función Suma y se almacena el resultado en la variable res. */
  printf("\n\nSuma del arreglo: %.2lf\n", res);
}

void Lectura(float a[], int t) {
  int i;

  for (i = 0; i < t; i++) {
    printf("Ingrese el elemento %d: ", i + 1);
    scanf("%f", &a[i]);
  }
}

double Suma(float a[], int t) {
  int i;
  double aux = 0.0;

  for (i = 0; i < t; i++) {
    aux += pow(a[i], 2);
  }

  return aux;
}