#include<stdio.h>
int main()
{
  int no, no2;
  printf("Enter any number:");
  scanf("%d", &no);
  switch(no%2)
  {
  case 0:printf("%d is a even number", no);
  break;
  case 1:printf("%d is a odd number", no);
  break;
  }
}
