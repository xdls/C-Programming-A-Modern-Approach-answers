/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
    float commission, value,number,price;

    printf("Enter value of trade: ");
    scanf("%f %f", &number,&price);
    value=number*price;

    if (value < 2500.00f)
        commission = 330.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 356.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 376.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\n", commission);

    if (number<2000)
    {
        commission=33.3*price;
    }
    else
    {
        commission=33.2*price;
    }

    printf("match commission:$%.2f",commission);
    
    return 0;
}