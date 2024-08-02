#include<stdio.h>
int main()
{
   int no1, no2, ans;

   printf("Enter two integers");
   scanf("%d %d", &no1, &no2);

   ans=no1%no2;
   if (ans==0)
     printf("%d %d", no1, no2);
   else
     printf("Error");
}
