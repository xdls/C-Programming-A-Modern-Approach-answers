#include <stdio.h>

int main(void)
{
    int a;

    printf("Enter a two-digit number:");
    scanf("%d",&a);
    printf("\n");
    printf("The reversal is:%d",a%10*100+(a%100-a%10)+a/100);

    return 0;
}