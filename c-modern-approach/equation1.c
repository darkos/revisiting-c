#include <stdio.h>
#include <math.h>

int main(void) {
    float x, val1, val2;
    printf("Enter value for x to use it for equation: ");
    scanf("%f", &x);
    val1 = (3 * (x*x*x*x*x)) + (2 * (x*x*x*x)) - (5 * (x*x*x)) - (x*x) + (7 * x) - 6;
    printf("result 1: %.2f\n", val1);
    val2 = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("result 2: %.2f\n", val2);
    return 0;
}