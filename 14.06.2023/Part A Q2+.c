#include<stdio.h>
int main()
{
  int no1, no2, Ans;
  char operators;
  printf("Enter number one and two");
  scanf("%d %d", &no1, &no2);
  printf("+\n");
  printf("-\n");
  printf("*\n");
  printf("/\n");
  printf("Enter your operator");
  scanf("%c", &operators);

  switch(operators)
  {
  case +:
  printf("Answer=%d", no1+no2);
  break;
  case -:
  printf("Answer=%d", no1-no2);
  break;
  case *:
  printf("Answer=%d", no1*no2);
  break;
  case /:
  printf("Answer=%d", no1/no2);
  break;
  }
}

