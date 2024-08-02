#include<stdio.h>
int main()
{
   int admno,marks;
   char grade;
   printf("Enter your admission number");
   scanf("%d", &admno);
   printf("Enter your marks");
   scanf("%d", &marks);

   if (marks>=75)
   grade='A';
   else if(marks>=65)
   grade='B';
   else if(marks>=55)
   grade='C';
   else if(marks>=45)
   grade='S';
   else
   grade='F';

   printf("Admission number=%d \nGrade is %c", admno, grade);
}
