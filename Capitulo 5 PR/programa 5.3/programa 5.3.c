#include <stdio.h>

void main(void) {
  int x = 3, y = 7, z[5] = {2, 4, 6, 8, 10};
  printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d\n", x, y, z[0], z[1], z[2], z[3], z[4]);

  int *ix;
  ix = &x;
  y = *ix;
  *ix = 1;
  printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d\n", x, y, z[0], z[1], z[2], z[3], z[4]);

  ix = &z[2];
  y = *ix;
  *ix = 15;
  printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d\n", x, y, z[0], z[1], z[2], z[3], z[4]);

  x = *ix + 5;
  *ix = *ix - 5;
  printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d\n", x, y, z[0], z[1], z[2], z[3], z[4]);

  ++*ix;
  *ix += 1;
  printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d\n", x, y, z[0], z[1], z[2], z[3], z[4]);

  x = *(ix + 1);
  y = *ix;
  printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d\n", x, y, z[0], z[1], z[2], z[3], z[4]);

  ix = ix + 1;
  y = *ix;
  printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d\n", x, y, z[0], z[1], z[2], z[3], z[4]);

  ix = ix + 4;
  printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d\n", x, y, z[0], z[1], z[2], z[3], z[4]);

  ix = &x;
  ix = ix + 1;
  x = *ix;
  printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d\n", x, y, z[0], z[1], z[2], z[3], z[4]);
}