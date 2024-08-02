#include<stdio.h>
int main()
{
   int base, exp, count=1, ans=1;
   printf("Enter the base");
   scanf("%d", &base);
   printf("Enter the exponent");
   scanf("%d", &exp);
   while(count<=exp)
   {
     ans=ans*base;
     count++;
   }
   printf("The asnswer is : %d", ans);
}
