#include <stdio.h>

void inverso(char *cadena);
void main(void) {
  char fra[50];

  printf("Ingrese la l�nea de texto: ");
  gets(fra);

  printf("\nEscribe la l�nea de texto en forma inversa: ");
  inverso(fra);
}

void inverso(char *cadena) {
  if (*cadena != '\0') {
    inverso(&cadena[1]);
    putchar(*cadena);
  }
}
