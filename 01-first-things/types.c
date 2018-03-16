#include <float.h>
#include <limits.h>
#include <stdio.h>

int main() {
  unsigned long long ullmax = ULLONG_MAX;
  long lmax = LONG_MAX;
  long double ldmax = LDBL_MAX;

  printf("The max value of an unsigned long long is %Lu.\n", ullmax);
  printf("-------------------------------------\n");
  printf("The max value of a long is %ld.\n", lmax);
  printf("-------------------------------------\n");
  printf("The max value of a long double is %Lf.\n", ldmax);
  printf("-------------------------------------\n");

  return 0;
}