#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    long cua, sum = 0;

    printf("\nIngrese un número entero -0 para terminar-: ");
    scanf("%d", &num);

    while (num)
    {
        cua = pow(num, 2);
        printf("%d al cubo es %ld\n", num, cua);
        sum += cua;
        printf("\nIngrese un número entero -0 para terminar-: ");
        scanf("%d", &num);
    }

    printf("\nLa suma de los cuadrados es %ld\n", sum);

    return 0;
}