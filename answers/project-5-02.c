#include <stdio.h>

int main(void)
{
    int hour,minute;

    printf("Enter a 24-hour time:");
    scanf("%d:%d",&hour,&minute);
    if (hour>12)
    {
        hour-=12;
        printf("Equivalent 12-hour time:%d:%d PM",hour,minute);
    }
    else
    {
       printf("Equivalent 12-hour time:%d:%d AM", hour, minute);
    }
    
    return 0;
}