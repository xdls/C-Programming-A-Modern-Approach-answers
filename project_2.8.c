#include <stdio.h>

int main(void)
{
  float loan,rate,payment,first,second,third;

  printf("Enter amount of loan: ");
  scanf("%f",&loan);
  printf("\n\n");
  printf("Enter interest rate: ");
  scanf("%f",&rate);
  printf("\n\n");
  printf("Enter monthly payment: ");
  scanf("%f",&payment);
  printf("\n\n\n");
  first=loan-payment+loan*rate/100/12;
  printf("Balance remaining after first payment: %.2f\n",first);
  second=first-payment+first*rate/100/12;
  printf("Balance remaining after second payment: %.2f\n",second);
  third=second-payment+second*rate/100/12;
  printf("Balance remaining after third payment: %.2f\n",third);

  return 0;
}
