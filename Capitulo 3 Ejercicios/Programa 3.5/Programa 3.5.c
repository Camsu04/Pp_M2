#include <stdio.h>

void main()
{
    float pag, spa = 0;
    printf("Ingrese el primer pago:\t");
    scanf("%f", &pag);

    /* Observa que al utilizar la estructura do-while al menos se necesita un pago. */
    do
    {
        spa = spa + pag;
        printf("Ingrese el siguiente pago -0 para terminar-:\t ");
        scanf("%f", &pag);
    } while (pag);

    printf("\nEl total de pagos del mes es: %.2f\n", spa);
}