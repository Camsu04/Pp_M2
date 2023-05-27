#include <stdio.h>

int main()
{
    float pag, spa;
    spa = 0;

    printf("Ingrese el primer pago: ");
    scanf("%f", &pag);

    while (pag != 0)
    {
        spa += pag;
        printf("Ingrese el siguiente pago: ");
        scanf("%f", &pag);
    }

    printf("\nEl total de pagos del mes es: %.2f", spa);

    return 0;
}