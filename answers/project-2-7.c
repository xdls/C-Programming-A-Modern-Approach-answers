#include <stdio.h>

int main(void)
{
  int a,b,c,d,e;

  printf("Enter a dollar amount:");
  scanf("%d",&a);
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
  b=a/20;
  printf("$20 bills: %d\n",b);
  c=(a-(b*20))/10;
  printf("$10 bills: %d\n",c);
  d=(a-b*20-c*10)/5;
  printf(" $5 bills: %d\n",d);
  e=a-b*20-c*10-d*5;
  printf(" $1 bills: %d\n",e);

  return 0;
}
