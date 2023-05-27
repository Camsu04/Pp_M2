#include <stdio.h>

void main()
{
    int i, n;
    float lan, sla = 0;

    do
    {
        printf("Ingrese el número de lanzamientos:\t");
        scanf("%d", &n);
    } while (n < 1 || n > 11);

    for (i = 1; i <= n; i++)
    {
        printf("\nIngrese el lanzamiento %d: ", i);
        scanf("%f", &lan);
        sla = sla + lan;
    }

    sla = sla / n;
    printf("\nEl promedio de lanzamientos es: %.2f\n", sla);
}