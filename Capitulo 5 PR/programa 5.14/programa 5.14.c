#include <stdio.h>
#include <math.h>

const int MAX = 100;
void Lectura(int *a, int t);
float Media(int *a, int t);
float Varianza(int *a, int t, float m);
float Desviacion(float v);
void Frecuencia(int *a, int t, int *f);
int Moda(int *a, int t);
void main(void) {
  int tam, mod, alu[MAX], fre[11] = {0};
  float med, var, des;
  do {
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tam);
  } while (tam > MAX || tam < 1);
  // Se verifica que el tamaño del arreglo sea correcto.
  Lectura(alu, tam);
  med = Media(alu, tam);
  var = Varianza(alu, tam, med);
  des = Desviacion(var);
  Frecuencia(alu, tam, fre);
  mod = Moda(fre, 11);
  printf("\nMedia: %.2f", med);
  printf("\nVarianza: %.2f", var);
  printf("\nDesviación: %.2f", des);
  printf("\nModa: %d", mod);
}
void Lectura(int *a, int t) {
  int i;
  for (i = 0; i < t; i++) {
    printf("Ingrese el elemento %d: ", i + 1);
    scanf("%d", &a[i]);
  }
}
float Media(int *a, int t) {
  int i;
  float sum = 0.0;
  for (i = 0; i < t; i++) {
    sum += a[i];
  }
  return (sum / t);
}
float Varianza(int *a, int t, float m) {
  int i;
  float sum = 0.0;
  for (i = 0; i < t; i++) {
    sum += pow((a[i] - m), 2);
  }
  return (sum / t);
}
float Desviacion(float v) {
  return (sqrt(v));
}
void Frecuencia(int *a, int p, int *b) {
  int i;
  for (i = 0; i < p; i++) {
    b[a[i]]++;
  }
}
int Moda(int *a, int t) {
  int i, mod = 0, val = a[0];
  for (i = 1; i < t; i++) {
    if (mod < a[i]) {
      mod = i;
      val = a[i];
    }
  }
  return (mod);
}