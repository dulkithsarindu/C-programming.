#include<stdio.h>
int main()
{
  int no1;
  float no2;
  double no3;
  char name[15];

  printf("Enter any Number");
  scanf("%d", &no1);
  printf("Enter any floating point number");
  scanf("%f", &no2);
  printf("Enter any double precision number");
  scanf("%If", &no3);
  printf("Enter your name");
  scanf("%s",&name);

  printf("\nNumber:%d \n, Floating point Number:%f \n, Double precision Number%f \n, Your name%s", no1, no2, no3, name);
}
