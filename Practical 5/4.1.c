#include<stdio.h>
int main()
{
  int num, r, sum=0;
  printf("Enter any number");
  scanf("%d", &num);
  do
  {
  r=num%10;
  sum=sum+r;
  num/=10;
  }while(num>0);
  printf("Sum of all digits entered=%d", sum);
}
