#include <stdio.h>

void main()
{
    int i = 0;
    float sal, pro, nom = 0;

    printf("Ingrese el salario del profesor:\t");
    scanf("%f", &sal);

    do
    {
        nom = nom + sal;
        i = i + 1;
        printf("Ingrese el salario del profesor -0 para terminar- :\t");
        scanf("%f", &sal);
    } while (sal);

    pro = nom / i;
    printf("\nNómina: %.2f \t Promedio de salarios: %.2f\n", nom, pro);
}