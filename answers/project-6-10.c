#include <stdio.h>

int main(void)
{
    int mm, dd, yy, mm_min, dd_min, yy_min;

    printf("Enter a date (mm/dd/yy):");
    scanf("%d/%d/%d", &mm, &dd, &yy);
    mm_min = mm;
    dd_min = dd;
    yy_min = yy;
    for (; mm != 0 || dd != 0 || yy != 0;)
    {
        printf("Enter a date (mm/dd/yy):");
        scanf("%d/%d/%d", &mm, &dd, &yy);
        if (mm==0&&dd==0&&yy==0)
        {
            printf("%d/%d/%02d is the earliest date", mm_min, dd_min, yy_min);

            return 0;
        }
        
        if (yy > yy_min)
        {
            ;
        }
        else if (yy<yy_min)
        {
            mm_min = mm;
            dd_min = dd;
            yy_min = yy;
        }
        
        else
        {
            if (mm > mm_min)
            {
                ;
            }
            else if (mm < mm_min)
            {
                mm_min = mm;
                dd_min = dd;
                yy_min = yy;
            }

            else
            {
                if (dd > dd_min)
                {
                    ;
                }
                else if (dd < dd_min)
                {
                    mm_min = mm;
                    dd_min = dd;
                    yy_min = yy;
                }

                else
                {
                    ;
                }
            }
        }
    }

}