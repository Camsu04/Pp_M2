#include <stdio.h>

/* Prueba de parámetros por referencia. */
void f1(int *r);
/* Prototipo de función. El parámetro es de tipo entero y por referencia
—observa el uso del operador de indirección. */
void main(void) {
  int i, k = 4;
  for (i = 1; i <= 3; i++) {
    printf("\n\nValor de K antes de llamar a la función: %d\n", ++k);
    printf("\nValor de K después de llamar a la función: %d\n", f1(&k));
    /* Llamada a la función f1. Se pasa la dirección de la variable K,
    por medio del operador de dirección: &. */
  }
}
void f1(int *r) {
  /* La función f1 recibe un parámetro por referencia. Cada vez que el
  parámetro se utiliza en la función debe ir precedido por el operador de
  indirección. */
  *r += *r;
}