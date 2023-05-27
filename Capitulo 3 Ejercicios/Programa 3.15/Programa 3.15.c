#include <stdio.h>

int main() {
  int i = 1, b = 0, c;
  double res;
  res = 4.0 / i;
  c = 1;
  while ((fabs(3.1415 - res)) > 0.0005) {
    i += 2;
    if (b) {
      res += (double)(4.0 / i);
      b = 0;
    } else {
      res -= (double)(4.0 / i);
      b = 1;
    }
    c++;
  }
  printf("\nNúmero de términos:%d", c);
  return 0;
}