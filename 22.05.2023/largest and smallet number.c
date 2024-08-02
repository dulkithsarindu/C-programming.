#include<stdio.h>
int main()
{
   int no1,no2,no3;
   printf("Enter three numbers");
   scanf("%d %d %d", &no1, &no2, &no3);

   if (no1>no2 && no1>no3)
   printf("%d is the largest number \n", no1);
   else if(no2>no3)
   printf("%d is the largest number \n", no2);
   else
   printf("%d is the largest number \n", no3);

   if(no1<no2 && no1<no3)
   printf("%d is the smallest number \n", no1);
   else if(no2<no3)
   printf("%d is the smallest number \n", no2);
   else
   printf("%d is the smallest number \n", no3);
}
