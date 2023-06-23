#include <stdio.h>

typedef struct alumno {
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} Alumno;

void ordena(FILE *, FILE *);

void main(void) {
    FILE *ar1, *ar2;
    ar1 = fopen("ad5.dat", "r");
    ar2 = fopen("ad6.dat", "w");

    if ((ar1 != NULL) && (ar2 != NULL)) {
        ordena(ar1, ar2);
    } else {
        printf("\nEl o los archivos no se pudieron abrir");
    }

    fclose(ar1);
    fclose(ar2);
}

void ordena(FILE *ar1, FILE *ar2) {
    Alumno alumnos[100];
    int i = 0;

    while (!feof(ar1) && i < 100) {
        fscanf(ar1, "%d %s %d %f", &alumnos[i].matricula, alumnos[i].nombre, &alumnos[i].carrera, &alumnos[i].promedio);
        i++;
    }


    for (int j = 0; j < i - 1; j++) {
        for (int k = 0; k < i - j - 1; k++) {
            if (alumnos[k].matricula > alumnos[k + 1].matricula) {
                Alumno temp = alumnos[k];
                alumnos[k] = alumnos[k + 1];
                alumnos[k + 1] = temp;
            }
        }
    }

    for (int j = 0; j < i; j++) {
        fprintf(ar2, "%d %s %d %f\n", alumnos[j].matricula, alumnos[j].nombre, alumnos[j].carrera, alumnos[j].promedio);
    }
}
