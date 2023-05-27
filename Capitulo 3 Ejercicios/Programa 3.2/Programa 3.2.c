#include <stdio.h>

void main(void)
{
    int I, N, NUM, SUM;
    SUM = 0;
    printf("Ingrese el número de datos:\t");
    scanf("%d", &N);
    for (I = 1; I <= N; I++)
    {
        printf("Ingrese el dato número %d:\t", I);
        scanf("%d", &NUM);
        if (NUM > 0)
        {
            SUM = SUM + NUM;
        }
    }
    printf("\nLa suma de los números positivos es: %d", SUM);
}