#include <stdio.h>

int main(void)
{
    int area_code;

    scanf("%d",&area_code);

    switch (area_code)
    {
    case 229:
        printf("Albany");
        break;
    case 404:
    case 678:
    case 470:
    case 770:
        printf("Atlanta");
        break;
    case 478:
        printf("Macon");
        break;
    case 706:
    case 762:
        printf("Columbus");
    case 912:
        printf("Savannah");
    default:
        printf("Area code not recognized");
        break;
    }
}