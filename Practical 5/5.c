#include<stdio.h>
int main()
{
  int no, r;
  printf("Enter any  number");
  scanf("%d", &no);

  do
  {
  r=no%10;
  printf("%d", r);
  no=no/10;

  }while(no>0);
}
