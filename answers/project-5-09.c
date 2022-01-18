#include <stdio.h>

int main(void)
{
    int mm,dd,yy,mm1,dd1,yy1;

    printf("Enter first date (mm/dd/yy):");
    scanf("%d/%d/%d",&mm,&dd,&yy);
    printf("\n");
    printf("Enter second date (mm/dd/yy):");
    scanf("%d/%d/%d",&mm1,&dd1,&yy1);
    printf("\n");
    if (yy<yy1)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d",mm,dd,yy,mm1,dd1,yy1);
    }
    else if (yy>yy1)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d", mm1, dd1, yy1, mm, dd, yy);
    }
    else
    {
        if (mm<mm1)
        {
            printf("%d/%d/%d is earlier than %d/%d/%d", mm, dd, yy, mm1, dd1, yy1);
        }
        else if (mm>mm1)
        {
            printf("%d/%d/%d is earlier than %d/%d/%d", mm1, dd1, yy1, mm, dd, yy);
        }
        else
        {
            if (dd<dd1)
            {
                printf("%d/%d/%d is earlier than %d/%d/%d", mm, dd, yy, mm1, dd1, yy1);
            }
            else if (dd>dd1)
            {
                printf("%d/%d/%d is earlier than %d/%d/%d", mm1, dd1, yy1, mm, dd, yy);
            }
            
            
        }
        
        
    }

    return 0;    
}