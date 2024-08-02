#include<stdio.h>
int main()
{
  int num, i;
  printf("Enter any number");
  scanf("d", num);
  printf("\nFactors of %d are", num);
  for(i=1;i<=num;i++)
  {
    if(num%i==0)
    {
      printf("\n%d", i);
    }
  }
}
