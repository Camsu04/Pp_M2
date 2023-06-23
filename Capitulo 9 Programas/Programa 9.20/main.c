#include <stdio.h>

typedef struct matcal {
    char materia[20];
    int calificacion;
} MatCal;

typedef struct alumno {
    int matricula;
    char nombre[20];
    MatCal cal[5];
} Alumno;

void F1(FILE*);
void F2(FILE*);
float F3(FILE*);

void main(void) {
    float pro;
    FILE* ap;

    if ((ap = fopen("esc.dat", "r")) != NULL) {
        F1(ap);
        F2(ap);
        pro = F3(ap);
        printf("\n\nPROMEDIO GENERAL MATERIA 4: %f", pro);
    } else {
        printf("\nEl archivo no se puede abrir");
    }

    fclose(ap);
}

void F1(FILE* ap) {
    Alumno alu;
    int j;
    float sum, pro;

    printf("\nMATRÍCULA y PROMEDIOS");
    fread(&alu, sizeof(Alumno), 1, ap);

    while (!feof(ap)) {
        printf("\nMatrícula: %d", alu.matricula);
        sum = 0.0;

        for (j = 0; j < 5; j++) {
            sum += alu.cal[j].calificacion;
        }

        pro = sum / 5;
        printf("\tPromedio: %f", pro);
        fread(&alu, sizeof(Alumno), 1, ap);
    }
}

void F2(FILE* ap) {
    Alumno alu;
    fread(&alu, sizeof(Alumno), 1, ap);

    printf("\n\nALUMNOS CON CALIFICACIÓN > 9 EN MATERIA 3");

    while (!feof(ap)) {
        if (alu.cal[2].calificacion > 9) {
            printf("\nMatrícula del alumno: %d", alu.matricula);
        }

        fread(&alu, sizeof(Alumno), 1, ap);
    }
}

float F3(FILE* ap) {
    Alumno alu;
    int i = 0;
    float sum = 0, pro;

    rewind(ap);
    fread(&alu, sizeof(Alumno), 1, ap);

    while (!feof(ap)) {
        i++;
        sum += alu.cal[3].calificacion;
        fread(&alu, sizeof(Alumno), 1, ap);
    }

    pro = sum / i;
    return pro;
}
