#include<stdio.h>
int main()
{
   int ad_no, marks;

   printf("Enter your admission number");
   scanf("%d", &ad_no);
   printf("Enter your marks");
   scanf("%d", &marks);

   printf("Hi, %d \n", ad_no);
   if(marks>=75)
   printf("Grade=A");
   else if(marks>=65)
   printf("Grade=B");
   else if(marks>=55)
   printf("Grade=C");
   else if(marks>=45)
   printf("Grade=S");
   else if(marks<45)
   printf("Grade=F");

}
