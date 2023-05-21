#include <stdio.h>
#include <math.h>

/* Volumen y área del cilindro
El programa, al recibir como datos el radio y la altura de un cilindro,
calcula su área y su volumen.
RAD, ALT, VOL y ARE: variables de tipo real. */

void main() {
  float RAD, ALT, VOL, ARE;

  // Solicitamos al usuario que ingrese el radio y la altura del cilindro
  printf("Ingrese el radio y la altura del cilindro: ");
  scanf("%f %f", &RAD, &ALT);

  // Calculamos el volumen y el área del cilindro
  VOL = M_PI * RAD * RAD * ALT;
  ARE = 2 * M_PI * RAD * (RAD + ALT);

  // Imprimimos el volumen y el área del cilindro
  printf("\nEl volumen es: %6.2f \t El área es: %6.2f\n", VOL, ARE);
}
