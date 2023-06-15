#include <stdio.h>
#include <string.h>

int longitud(char *cadena);

void main(void) {
  int i, n, l = -1, p, t;
  char cad[50], FRA[20][50];

  printf("Ingrese el número de filas del arreglo: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Ingrese la línea %d de texto. Máximo 50 caracteres: ", i + 1);
    fflush(stdin);
    gets(FRA[i]);
  }

  for (i = 0; i < n; i++) {
    strcpy(cad, FRA[i]);
    t = longitud(cad);
    if (t > l) {
      l = t;
      p = i;
    }
  }

  printf("\nLa cadena con mayor longitud es: ");
  puts(FRA[p]);
  printf("\nLongitud: %d\n", l);
}

int longitud(char *cadena) {
  int cue = 0;
  while (cadena[cue] != '\0') {
    cue++;
  }
  return cue;
}
