#include<stdio.h>
int main()
{
  int no;
  printf("Enter number:");
  scanf("%d", &no);
  if(no%2==0)
  printf("%d is a even number", no);
  else
  printf("%d is a odd number", no);
}
