#include <stdio.h>

#define TAX_RATE 0.05f

int main(void) {
    int dollars, cents; 
    float finalPrice;
    printf("Enter the price you are paying, first dollar ammount and than cents.\n");
    printf("Enter full dollar ammount (no cents): ");
    scanf("%d", &dollars);
    printf("Enter remaining cents: ");
    scanf("%d", &cents);
    finalPrice = dollars + (cents / 100.0f);
    finalPrice += (finalPrice * TAX_RATE);
    printf("fina price with tax: %.2f", finalPrice);
    return 0;
}