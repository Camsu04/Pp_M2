#include <stdio.h>

/* Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso
universitario, escribe "aprobado" si su promedio es mayor o igual a 6.
PRO: variable de tipo real. */

void main() {
  float PRO;
  printf("Ingrese el promedio del alumno: ");
  scanf("%f", &PRO);
  if (PRO >= 6) {
    printf("\nAprobado");
  }
}
