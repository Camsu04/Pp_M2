#include <stdio.h>
#include <math.h>

void main()
{
    int i, n, num, spa = 0, sim = 0, cim = 0;

    printf("Ingrese el número de datos que se van a procesar:\t");
    scanf("%d", &n);

    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            printf("\nIngrese el número %d: ", i);
            scanf("%d", &num);

            if (num % 2 == 0)
            {
                spa = spa + num;
            }
            else
            {
                sim = sim + num;
                cim++;
            }
        }

        printf("\nLa suma de los números pares es: %d\n", spa);
        printf("\nEl promedio de números impares es: %5.2f\n", (float)sim / cim);
    }
    else
    {
        printf("\nEl valor de N es incorrecto\n");
    }
}