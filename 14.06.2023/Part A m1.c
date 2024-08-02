#include<stdio.h>
int main()
{
  double no1, no2, ans;
  int operators;
  printf("Enter no1:");
  scanf("%lf", &no1);
  printf("1)+ \n");
  printf("2)- \n");
  printf("3)* \n");
  printf("4)/ \n");
  scanf("%d", &operators);
  printf("Enter no2:");
  scanf("%lf", &no2);

  switch(operators)
  {
  case 1:
    ans=no1+no2;
    printf("ans= %lf", ans);
    break;
  case 2:
    ans=no1-no2;
    printf("ans= %lf", ans);
    break;
  case 3:
    ans=no1*no2;
    printf("ans= %lf", ans);
    break;
  case 4:
    ans=no1/no2;
    printf("ans= %lf", ans);
    break;
  default:
    printf("%d Error", operators);


  }
}
