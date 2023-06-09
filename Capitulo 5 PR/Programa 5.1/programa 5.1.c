#include <stdio.h>

void main(void) {
  int i, num, cue = 0;
  int arr[100];

  for (i = 0; i < 100; i++) {
    printf("Ingrese el elemento %d del arreglo: ", i + 1);
    scanf("%d", &arr[i]);
  }

  printf("\n\nIngrese el número que se va a buscar en el arreglo: ");
  scanf("%d", &num);

  for (i = 0; i < 100; i++) {
    if (arr[i] == num) {
      cue++;
    }
  }

  printf("\n\nEl %d se encuentra %d veces en el arreglo", num, cue);
}