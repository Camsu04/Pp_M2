#include <stdio.h>

void Rango(float);
int RA1 = 0;
int RA2 = 0;
int RA3 = 0;
int RA4 = 0;
int RA5 = 0;

void main(void) {
  float cal;
  printf("Ingresa la primera calificación del alumno: ");
  scanf("%f", &cal);
  while (cal != -1) {
    Rango(cal);
    printf("Ingresa la siguiente calificación del alumno: ");
    scanf("%f", &cal);
  }
  printf("\n0..3.99 = %d\n", RA1);
  printf("4..5.99 = %d\n", RA2);
  printf("6..7.99 = %d\n", RA3);
  printf("8..8.99 = %d\n", RA4);
  printf("9..10 = %d\n", RA5);
}

void Rango(float val) {
  if (val < 4) {
    RA1++;
  } else if (val < 6) {
    RA2++;
  } else if (val < 8) {
    RA3++;
  } else if (val < 9) {
    RA4++;
  } else {
    RA5++;
  }
}