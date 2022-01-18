//10 5 3 2 1 1 1 无限循环1
#include <stdio.h>

int main(void)
{
    int i;

    for (i = 10; i >= 1; i /= 2)
        printf("%d ", i++);
}