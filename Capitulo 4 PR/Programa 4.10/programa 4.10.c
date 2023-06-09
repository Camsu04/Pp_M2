#include <stdio.h>

int multiplo(int, int); /* Prototipo de función. */
void main(void) {
  int num1, num2, res;
  printf("\nIngresa los dos números: ");
  scanf("%d %d", &num1, &num2);
  res = multiplo(num1, num2);
  if (res) {
    printf("\nEl segundo número es múltiplo del primero");
  } else {
    printf("\nEl segundo número no es múltiplo del primero");
  }
}
int multiplo(int n1, int n2) {
  int res;
  if ((n2 % n1) == 0) {
    res = 1;
  } else {
    res = 0;
  }
  return (res);
}