#include <stdio.h>

int main(void)
{
    int m, n, k;

    printf("Enter two integers:");
    scanf("%d %d",&m,&n);
    for (; n != 0;)
    {
        k=m%n;
        m=n;
        n=k;
    }
    printf("Greatest common divisor:%d",m);
}