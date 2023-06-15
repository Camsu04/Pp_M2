#include <stdio.h>
#include <string.h>

void main(void) {
  int i;
  char fra[50];

  printf("Ingrese la línea de texto: ");
  gets(fra);

  i = cuentap(fra);

  printf("\nLa línea de texto tiene %d palabras\n", i);
}

int cuentap(char *cad) {
  int i = 0;

  while (*cad != '\0') {
    if (*cad != ' ') {
      i++;
    }
    while (*cad != '\0' && *cad == ' ') {
      cad++;
    }
  }

  return i;
}

