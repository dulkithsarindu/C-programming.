#include<stdio.h>
int main()
{
   int a=0, b=1, count,result;
   for(count=1;count<=10;count++)
   {
     printf("%d \n", a);
     result=a+b;
     a=b;
     b=result;
   }
}
