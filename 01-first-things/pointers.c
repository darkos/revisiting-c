#include <stdio.h>

int main() {
  int x, y, z;
  x = 1;
  y = 2;

  int *ptoi; /* ptoi is, and stands for, pointer to integer*/
  ptoi = &x; /* ptoi points to x */
  printf("address is: %p.\n", ptoi);
  // z = *ptoi; /* z is now 1, x's value, towards which ptoi points */
  // ptoi = &y; /*ptoi now points to y */
  printf("y is: %d.\n", y);
  printf("address of y is: %p.\n", &y);
  return 1;
}
