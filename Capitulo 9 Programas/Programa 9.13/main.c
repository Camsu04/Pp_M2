#include <stdio.h>

int cuenta(char);

int main(void) {
    int res;
    char car;

    printf("\nIngrese el caracter que se va a buscar en el archivo: ");
    car = getchar();
    res = cuenta(car);

    if (res != -1) {
        printf("\n\nEl caracter %c se encuentra en el archivo %d veces", car, res);
    } else {
        printf("No se pudo abrir el archivo");
    }

    return 0;
}

int cuenta(char car) {
    int res = 0, con = 0;
    char p;
    FILE *ar;

    if ((ar = fopen("arch.txt", "r")) != NULL) {
        while ((p = getc(ar)) != EOF) {
            if (p == car) {
                con++;
            }
        }

        fclose(ar);
        res = con;
    } else {
        res = -1;
    }

    return res;
}
