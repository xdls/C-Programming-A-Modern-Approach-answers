#include <stdio.h>

int main(void)
{
  int mm,dd,yy;

  printf("Enter a date (mm/dd/yyyy):");
  scanf("%d/%d/%d",&mm,&dd,&yy);
  printf("\n\n");
  printf("You entered the date %.4d%.2d%.2d",yy,mm,dd);

  return 0;
}
