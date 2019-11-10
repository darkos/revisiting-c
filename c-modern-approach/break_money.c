#include <stdio.h>
#include <math.h>

int main(void) {
    int amount, initialAmmount;
    int x20, x10, x5, x1;
    printf("enter ammount in dollars and i will break it down to small: ");
    scanf("%d", &amount);
    initialAmmount = amount;
    x20 = amount / 20;
    amount = amount - (20 * x20);
    x10 = amount / 10;
    amount = amount - (10 * x10);
    x5 = amount / 5;
    amount = amount - (x5 * 5);
    x1 = amount;   

    printf("amount of %d$ broken down looks like\n", initialAmmount);

    printf("$20: %d\n", x20);
    printf("$10: %d\n", x10);
    printf("$5: %d\n", x5);
    printf("$1: %d\n", x1);

    return 0;
}