#include<stdio.h>
int main()
{
   int x, y, count=1;
   for(x=1;x<=5;x++)
   {
     for(y=1;y<=count;y++)
     {
       printf("*");
     }
     count++;
     printf("\n");
   }
}
