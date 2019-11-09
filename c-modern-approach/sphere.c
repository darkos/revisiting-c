#include <stdio.h>
#include <math.h>

#define PI M_PI

int main(void) {
    float r = 10.0f;
    printf("Enter radius as positive decimal: ");
    scanf("%f", &r);
    float vol = (4.0f / 3.0f) * PI * (r * r * r);
    printf("Volume of sphere radius %.2f is: %.2f\n", r, vol);
    return 0;
}