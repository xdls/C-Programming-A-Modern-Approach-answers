#include <stdio.h>

int main(void)
{
  int item,mm,dd,yy;
  float unit;

  printf("Enter item number:");
  scanf("%d",&item);
  printf("Enter unit price:");
  scanf("%f",&unit);
  printf("Enter purchase date (mm/dd/yyyy):");
  scanf("%d/%d/%d",&mm,&dd,&yy);
  printf("\n\n");
  printf("item\tunit\tpurchase\n");
  printf("\tprice\tdate\n");
  printf("%d\t$%-.2f\t%d/%d/%d",item,unit,mm,dd,yy);

  return 0;
}
