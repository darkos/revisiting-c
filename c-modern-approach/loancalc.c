
#include <stdio.h>
#include <math.h>

int main(void) {
    float loan, currentBalance, interest, payment, monthlyInterest;
    printf("Enter the loan amount: ");
    scanf("%f", &loan);
    printf("Enter the interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment amount: ");
    scanf("%f", &payment);
    interest = interest/100.0;
    monthlyInterest = interest/12.0f;

    // balance after first 30 days
    currentBalance = loan * monthlyInterest + loan;
    printf("Bamance after first 30 days: %.2f\n", currentBalance);
    currentBalance -= payment;
    printf("Balance after frist payment of %.2f: %.2f\n", payment, currentBalance);
    currentBalance = currentBalance * monthlyInterest + currentBalance;
    currentBalance -= payment;
    printf("Balance after second payment of %.2f: %.2f\n", payment, currentBalance);
    currentBalance = currentBalance * monthlyInterest + currentBalance;
    currentBalance -= payment;
    printf("Balance after third payment of %.2f: %.2f\n", payment, currentBalance);

    return 0;
}