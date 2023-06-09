#include <stdio.h>
#include <math.h>

int Expression(int, int, int); /* Prototype of function. */
void main(void) {
  int exp, t = 0, p = 0, q = 0;
  exp = Expression(t, p, q);
  while (exp < 5500) {
    while (exp < 5500) {
      while (exp < 5500) {
        printf("\nT: %d, P: %d, Q: %d, Resultado: %d\n", t, p, q, exp);
        q++;
        exp = Expression(t, p, q);
      }
      p++;
      q = 0;
      exp = Expression(t, p, q);
    }
    t++;
    p = 0;
    q = 0;
    exp = Expression(t, p, q);
  }
}

int Expression(int t, int p, int q) {
  int res;
  res = 15 * pow(t, 4) + 12 * pow(p, 5) + 9 * pow(q, 6);
  return (res);
}