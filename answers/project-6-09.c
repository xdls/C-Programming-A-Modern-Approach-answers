#include <stdio.h>

int main(void)
{
    float loan, rate, payment, first, second, third, number;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("\n\n");
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("\n\n");
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter number:");
    scanf("%f", &number);
    printf("\n\n\n");
    for (int i = 1; i <= number; i++)
    {
        loan = loan - payment + loan * rate / 100 / 12;
        printf("Balance remaining after payment: %.2f\n", loan);
    }

    return 0;
}
