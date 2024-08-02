#include<stdio.h>
int main()
{
  char name[20];
  float nsal, bsal, inc;

  printf("Enter employee name");
  scanf("%s", &name);
  printf("Enter basic salary");
  scanf("%d", &bsal);

  if(bsal<5000)
  inc=bsal*(5/100);
  else if (bsal>=5000)
  inc=bsal*(10/100);
  else if(bsal>=10000)
  inc=bsal*(15/100);

  nsal=bsal+inc;

  printf("\nHi, %s \nYour New salary=%2f" , name, nsal);


}
