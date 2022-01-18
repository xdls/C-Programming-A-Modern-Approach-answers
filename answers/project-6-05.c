#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d", &a);
    do
    {
        printf("%d", a % 10);
        a = (a - a % 10)/10;
    } while (a != 0);
}
