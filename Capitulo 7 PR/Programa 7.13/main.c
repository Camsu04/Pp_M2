#include <stdio.h>

void main(void) {
  int i;
  char cad[50];

  printf("Ingrese la cadena de caracteres: ");
  gets(cad);

  i = cuenta(cad);

  printf("\nLongitud de la cadena: %d\n", i);
}

int cuenta(char *cadena) {
  int c = 0;
  while (cadena[c] != '\0') {
    c++;
  }
  return c;
}
