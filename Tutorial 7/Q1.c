#include<stdio.h>
void sum_difference()
{
   int no1, no2, sum, diff;
   printf("Enter two numbers");
   scanf("%d %d", &no1, &no2);
   sum=no1+no2;
   diff=no1-no2;
   printf("Sum=%d\nDifference=%d", sum, diff);
}
int main()
{
   sum_difference();
}
