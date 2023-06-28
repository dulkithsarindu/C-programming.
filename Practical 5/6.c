#include<stdio.h>
int main()
{
   int num, exp, ans=1;
   printf("Enter number");
   scanf("%d", &num);
   printf("Enter exponent");
   scanf("%d", &exp);

   while(exp>0)
   {
   ans=ans*num;
   exp--;
   }
   printf("Answer=%d", ans);
}
