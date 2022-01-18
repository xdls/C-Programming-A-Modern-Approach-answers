#include <stdio.h>

int main(void)
{
    int mile;

    scanf("%d",&mile);
    if (mile<1)
    {
        printf("Calm");
    }
    else if (mile<=3)
    {
        printf("Light air");
    }
    else if (mile<=27)
    {
        printf("Breeze");
    }
    else if (mile<=47)
    {
        printf("Gale");
    }
    else if (mile<=63)
    {
        printf("Storm");
    }
    else
    {
        printf("Hurricane");
    }
    
    return 0;
}