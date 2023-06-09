#include <stdio.h>
#include <stdlib.h>

//variables configurables
#define SUELDO_NO_DEFINIDO 0
#define SUELDO_LUJO 1
#define SUELDO_PRO  2
#define SUELDO_BAJO 3
#define SUELDO_MIN 4

#define VALOR_SUL_DE_LUJO 150000
#define VALOR_SUL_DE_PRO 50000
#define VALOR_SUL_DE_BAJO 25000
#define VALOR_SUL_DE_MIN 0
#define IMP_DE_LUJO 0.25

int main()
{
    float sul = 0.0;
    int sw = 0;
    printf("Calculos Impuestos sobre Sueldo!\n");
    printf("Ingrese el sueldo: ");
    scanf("%f",&sul);

    if (sul >= VALOR_SUL_DE_LUJO)
    {
        sw = SUELDO_LUJO;
    }else if(sul >= SUELDO_PRO)
    {
        sw = SUELDO_PRO;
    }else if (sul >= SUELDO_BAJO)
    {
        sw = SUELDO_BAJO;
    }else if (sul > VALOR_SUL_DE_MIN)
    {
        sw = VALOR_SUL_DE_MIN;
    }else
    {
        sw = SUELDO_NO_DEFINIDO;
    }

    switch (sw)
    {
    case SUELDO_LUJO:
        printf("EL impuesto a pagar sobre su sueldo de %7.2f pesos es: %f",sul,sul *IMP_DE_LUJO);
        break;
    case SUELDO_PRO:
        printf("EL impuesto a pagar sobre su sueldo de %7.2f pesos es: %f",sul,sul *0.1);
        break;
    case SUELDO_BAJO:
        printf("EL impuesto a pagar sobre su sueldo de %7.2f pesos es: %f",sul,sul *0.05);
        break;
    case SUELDO_MIN:
        printf("EL impuesto a pagar sobre su sueldo de %7.2f pesos es: %f",sul,sul *0.02);
        break;
    default:
        printf("Error de sueldo, no puede ser menor o igual a 0");
        break;
    }

    return 0;
}
