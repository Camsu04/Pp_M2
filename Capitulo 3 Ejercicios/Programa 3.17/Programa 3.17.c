#include <stdio.h>

int main()
{
    int i, j, num, sum, c = 0;

    printf("Ingrese el número límite: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        sum = 0;
        for (j = 1; j <= (i / 2); j++)
        {
            if ((i % j) == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("\n%d es un número perfecto", i);
            c++;
        }
    }

    printf("\nEntre 1 y %d hay %d números perfectos", num, c);

    return 0;
}