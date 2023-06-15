#include <stdio.h>

int cuenta(char *cad, char car);

void main(void) {
  char car, cad[50];
  int res;

  printf("Ingrese la cadena de caracteres: ");
  gets(cad);

  printf("Ingrese el caracter: ");
  car = getchar();

  res = cuenta(cad, car);

  printf("\n\n%c se encuentra %d veces en la cadena %s\n", car, res, cad);
}

int cuenta(char *cad, char car) {
  int i, r = 0;

  for (i = 0; cad[i] != '\0'; i++) {
    if (cad[i] == car) {
      r++;
    }
  }

  return r;
}
