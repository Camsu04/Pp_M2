#include <stdio.h>
#include <ctype.h>

void main(void) {
  char cad[50];
  int i, mi = 0, ma = 0;

  printf("Ingrese la cadena de caracteres (m�ximo 50 caracteres): ");
  gets(cad);

  for (i = 0; cad[i] != '\0'; i++) {
    if (islower(cad[i])) {
      mi++;
    } else if (isupper(cad[i])) {
      ma++;
    }
  }

  printf("\n\nN�mero de letras min�sculas: %d\n", mi);
  printf("N�mero de letras may�sculas: %d\n", ma);
}
