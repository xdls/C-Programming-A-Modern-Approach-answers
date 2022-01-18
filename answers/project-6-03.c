#include <stdio.h>

int main(void)
{
    int m, n, k, m1, n1;

    printf("Enter a fraction:");
    scanf("%d/%d", &m, &n);
    m1 = m;
    n1 = n;
    for (; n != 0;)
    {
        k = m % n;
        m = n;
        n = k;
    }
    printf("In lowest terms:%d/%d", m1 / m, n1 / m);
}