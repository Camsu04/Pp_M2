#include <stdio.h>

void main()
{
    int i, num;
    long fac;

    printf("\nIngrese el número: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        fac = 1;
        for (i = 1; i <= num; i++)
        {
            fac *= i;
        }
        printf("\nEl factorial de %d es: %ld\n", num, fac);
    }
    else
    {
        printf("\nError en el dato ingresado\n");
    }
}