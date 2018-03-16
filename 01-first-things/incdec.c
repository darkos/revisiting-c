#include <stdio.h>

int main() {
  int x;
  int n = 10;
  int z;

  n++; /* n will be 11 now */
  printf("n is now %d.\n", n);
  ++n; /*ditto, prefix or postfix unimportant */
  printf("n is now %d.\n", n);

  n = 10;

  x = n++; /* x will be 10 */
  printf("x is now %d.\n", x);
  z = ++n; /* z will be 11 */
  printf("z is now %d.\n", z);

  n = 10;
  printf("n is now %d.\n", n++);
  n = 10;
  printf("n is now %d.\n", ++n);
  n = 10;
  printf("n is now %d.\n", n += 7);
  printf("n is now %d.\n", n);

  return 0;
}