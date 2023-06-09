#include <stdio.h>
#include <math.h>

void Acutem(float);
void Maxima(float, int);
void Minima(float, int);

float act = 0.0;
float max = -50.0;
float min = 60.0;
int hmax;
int hmin;

void main(void) {
  float tem;
  int i;
  for (i = 1; i <= 24; i++) {
    printf("Ingresa la temperatura de la hora %d: ", i);
    scanf("%f", &tem);
    Acutem(tem);
    Maxima(tem, i);
    Minima(tem, i);
  }
  printf("\nPromedio del día: %5.2f", (act / 24));
  printf("\nMáxima del día: %5.2f \tHora: %d", max, hmax);
  printf("\nMínima del día: %5.2f \tHora: %d", min, hmin);
}

void Acutem(float tem) {
  act += tem;
}

void Maxima(float tem, int hora) {
  if (max < tem) {
    max = tem;
    hmax = hora;
  }
}

void Minima(float tem, int hora) {
  if (min > tem) {
    min = tem;
    hmin = hora;
  }
}