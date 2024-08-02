#include<stdio.h>
int main()
{
  int emp, bsal, c, d;

  do
  {
    printf("Enter employee number");
    scanf("%d", &emp);
    printf("Enter employee's basic salary");
    scanf("%d", &bsal);

    if(bsal>=5000)
    c++;
    else
    d++;
  }while(emp!=-999);
  printf("Number of employees who's salary is more than or equals 5000=", c);
}
