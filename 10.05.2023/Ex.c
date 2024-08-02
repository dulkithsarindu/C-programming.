#include<stdio.h>
int main()
{
  int no1;
  float no2;
  double no3;
  char ch;

  printf("Enter any number:");
  scanf("%d", &no1);
  printf("Enter floating point number:");
  scanf("%f", &no2);
  printf("Enter double precision number:");
  scanf("%lf", &no3);
  printf("Enter any character you want:");
  scanf("%c", &ch);

  printf("\nThe number you entered:-%d \nThe floating point number you Entered:-%f \nThe double precision number you Entered:-%f \nThe character you Entered:-%c", no1, no2, no3, ch);

}
