#include <stdio.h>

int main(void)
{
    float n, max;

    printf("Enter a number:");
    scanf("%f", &n);
    for (max = n; n > 0;)
    {
        if (n > max)
        {
            max = n;
        }
        printf("Enter a number:");
        scanf("%f", &n);
    }
    printf("The largest number entered was %f",max);

    return 0;
}