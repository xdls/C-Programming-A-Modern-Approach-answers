#include <stdio.h>

int main(void)
{
    int n;
    float e,sum,xx;
    sum=1.0f;
    e=1.0f;

    scanf("%f",&xx);
    for(float i=1.0f;(1/i)>=xx;i++){
		n=i+1;
	}
    for(int i=1;i<=n;i++)
    {
    	e*=i;
    	sum+=(1.0f/e);
    }
    printf("e=%f",sum);
    
    return 0;
}
