#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct estudiante {
  int id;
  int matricula;
  char nombre[100];
  char carrera[100];
};

void generar_id(struct estudiante *s) {
  s->id = rand() % 1000;
}

void agregar_estudiante(struct estudiante *estudiantes, int *num_estudiantes) {
  struct estudiante nuevo_estudiante;
  generar_id(&nuevo_estudiante);
  printf("Ingrese la carrera: ");
  scanf("%s", nuevo_estudiante.carrera);
  printf("Ingrese la matrícula: ");
  scanf("%d", &nuevo_estudiante.matricula);
  printf("Ingrese el nombre: ");
  scanf("%s", nuevo_estudiante.nombre);

  estudiantes[*num_estudiantes] = nuevo_estudiante;
  (*num_estudiantes)++;
}

void guardar_datos(struct estudiante *estudiantes, int num_estudiantes) {
  FILE *file = fopen("estudiantes.txt", "w");
  if (file == NULL) {
    printf("No se pudo crear el archivo.\n");
    return;
  }

  for (int i = 0; i < num_estudiantes; i++) {
    fprintf(file, "%d\t%d\t%s\t%s\n", estudiantes[i].id, estudiantes[i].matricula,
            estudiantes[i].nombre, estudiantes[i].carrera);
  }

  fclose(file);
}

int main() {
  struct estudiante *estudiantes;
  int num_estudiantes = 0;

  estudiantes = (struct estudiante *)malloc(sizeof(struct estudiante) * 100);

  while (1) {
    printf("1. Agregar estudiante\n2. Salir\n");
    int opcion;
    scanf("%d", &opcion);

    if (opcion == 1) {
      agregar_estudiante(estudiantes, &num_estudiantes);
      guardar_datos(estudiantes, num_estudiantes);
    } else {
      return 0;
    }
  }

  free(estudiantes);

  return 0;
}
