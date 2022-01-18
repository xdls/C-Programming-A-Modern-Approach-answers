#include <stdio.h>

int main(void)
{
    int number_single,number_ten;

    printf("Enter numerical grade:");
    scanf("%1d%1d",&number_ten,&number_single);
    printf("\n");
    printf("Letter grade:");
    switch (number_ten)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("F");
        break;
    case 6:
        printf("D");
        break;
    case 7:
        printf("B");
        break;
    case 8:
        printf("B");
        break;
    case 9:
        printf("A");
        break;
    default:
        printf("error");
        break;
    }
}