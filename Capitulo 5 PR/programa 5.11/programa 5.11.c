#include <stdio.h>

void Lectura(int *a, int t);
int Binaria(int *a, int t, int e);
void main(void) {
  int res, ele, tam, vec[MAX];
  do {
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tam);
  } while (tam > MAX || tam < 1);
  Lectura(vec, tam);
  printf("\nIngrese el elemento a buscar: ");
  scanf("%d", &ele);
  res = Binaria(vec, tam, ele);
  if (res) {
    printf("\nEl elemento se encuentra en la posición: %d", res);
  } else {
    printf("\nEl elemento no se encuentra en el arreglo");
  }
}
void Lectura(int *a, int t) {
  int i;
  for (i = 0; i < t; i++) {
    printf("Ingrese el elemento %d: ", i + 1);
    scanf("%d", &a[i]);
  }
}
int Binaria(int *a, int t, int e) {
  int izq = 0, der = t - 1, ban = 0, cen;
  while (izq <= der && !ban) {
    cen = (izq + der) / 2;
    if (e == a[cen]) {
      ban = cen;
    } else if (e > a[cen]) {
      izq = cen + 1;
    } else {
      der = cen - 1;
    }
  }
  return ban;
}