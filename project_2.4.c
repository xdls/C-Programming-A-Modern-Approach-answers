#include <stdio.h>

int main(void)
{
	float a;
	
	printf("Enter an amount:");
	scanf("%f",&a);
	printf("\nWith tax added:$");
	printf("%.2f",1.05f*a);
}
