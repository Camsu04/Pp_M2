#include <stdio.h>

const int MAX = 100;
void Lectura(int *a, int t);
int Busca(int *a, int t, int e);
void main(void) {
  int res, ele, tam, vec[MAX];
  do {
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tam);
  } while (tam > MAX || tam < 1);
  Lectura(vec, tam);
  printf("\nIngrese el elemento a buscar: ");
  scanf("%d", &ele);
  res = Busca(vec, tam, ele);
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
int Busca(int *a, int t, int e) {
  int res = 0, i = 0, ban = 0;
  while ((i < t) && (e >= a[i]) && !ban) {
    if (a[i] == e) {
      ban++;
      res = i + 1;
    } else {
      i++;
    }
  }
  return res;
}