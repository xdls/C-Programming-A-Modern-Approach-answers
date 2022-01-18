#include <stdio.h>

int main(void)
{
    int n,a;

    printf("Enter a number:");
    scanf("%d",&n);
    printf("\n");

    if (n<=9)
    {
        a=1;
    }
    else if (n>=10&&n<=99)
    {
        a=2;
    }
    else if (n>=100&&n<999)
    {
        a=3;
    }
    else if (n>=1000)
    {
        a=4;
    }
    printf("The number %d has %d digits",n,a);
    
    return 0;
}