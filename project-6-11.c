#include <stdio.h>

int main(void)
{
    int n;
    float e,sum;
    sum=1.0f;
    e=1.0f;

    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    	e*=i;
    	sum+=(1.0f/e);
    }
    printf("e=%f",sum);
    
    return 0;
}
