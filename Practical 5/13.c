#include<stdio.h>
int main()
{
  int n, tot;
  while(n!=-1)
  {
    printf("Enter any number");
    scanf("%d", &n);
    tot=tot+n;
  }
  printf("Total=%d", tot);
}
