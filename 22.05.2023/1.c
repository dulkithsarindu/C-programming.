#include<stdio.h>
int main()
{
  int no1;

  printf("Enter any number");
  scanf("%d", &no1);

  if (no1>0)
  printf("This is a positive number=%d \n", no1);
  else if (no1<0)
  printf("This is a negative number=%d \n", no1);
  else
  printf("This number is 0");

}
