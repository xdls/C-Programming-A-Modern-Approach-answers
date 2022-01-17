#include <stdio.h>

int main(void)
{
    int a,b,c,d,max,min;

    printf("Enter four integers:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("\n");
    if (a>=b&&a>=c&&a>=d)
    {
        max=a;
    }
    if (a<=b&&a<=c&&a<=d)
    {
        min=a;
    }
    if (b >= a  && b >= c && b >= d)
    {
        max = b;
    }
    if (b <= a && b <= c && b <= d)
    {
        min = b;
    }
    if (c >= b && c >= a && c >= d)
    {
        max = c;
    }
    if (c <= b && c <= a && c <= d)
    {
        min = c;
    }
    if (d >= b && d >= c && d >= a)
    {
        max = d;
    }
    if (d <= b && d <= c && d <= a)
    {
        min = d;
    }
    printf("Largest:%d\nSmallest:%d",max,min);

    return 0;
}