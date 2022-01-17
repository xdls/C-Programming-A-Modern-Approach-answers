#include <stdio.h>

int main(void)
{
    int i,j,k;
    
    i = 2;
    j = 3;
    k = i * j == 6;
    printf("%d", k);

    i = 5;
    j = 10;
    k = 1;
    printf("%d", k > i < j);

    i = 3;
    j = 2;
    k = 1;
    printf("%d", i < j == j < k);

    i = 3;
    j = 4;
    k = 5;
    printf("%d", i % j + i < k);
}