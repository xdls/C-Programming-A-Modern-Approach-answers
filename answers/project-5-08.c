#include <stdio.h>

int main(void)
{
    int hour,minute,all;

    printf("Enter a 24-hour time:");
    scanf("%d:%d",&hour,&minute);
    printf("\n");
    all=hour*60+minute;
    if (all<=480)
    {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    }
    else if (all<=9*60+43)
    {
        if (all-480<=9*60+43-all)
        {
            printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
        }
        else
        {
            printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
        }
    }
    else if (all<=11*60+19)
    {
        if (all-9*60-43<=11*60+19)
        {
            printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
        }
        else
        {
            printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
        }
           
    }
    else if (all<=12*60+47)
    {
        if (all-11*60-19<=12*60+47-all)
        {
            printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
        }
        else
        {
            printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
        }
           
    }
    else if (all<=14*60)
    {
        if (all-12*60-47<=14*60-all)
        {
            printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
        }
        else
        {
            printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
        }
           
    }
    else if (all<=15*60+45)
    {
        if (all-14*60<=15*60+45-all)
        {
            printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
        }
        else
        {
            printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
        }
           
    }
    else if (all<=19*60)
    {
        if (all-15*60-45<=19*60-all)
        {
            printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
        }
        else
        {
            printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
        }
           
    }
    else if (all<=21*60+45)
    {
        if (all-19*60<=21*60+45-all)
        {
            printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
        }
        else
        {
            printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
        }
           
    }
                   
    return 0;   
}