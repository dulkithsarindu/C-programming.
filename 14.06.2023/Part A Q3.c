#include<stdio.h>
int main()
{
  float r, cir, area, vol;
  int choice;
  printf("1)Find circumference of the circle\n");
  printf("2)Find area of the circle\n");
  printf("3)Find volume of the sphere\n");
  scanf("%d", &choice);
  printf("Enter Radius");
  scanf("%f", &r);
  switch(choice)
  {
  case 1:printf("Circumference of the circle=%f", 2*3.14*r);break;
  case 2:printf("Area of the circle=%f", 3.14*r*r);break;
  case 3:printf("Volume of the sphere=%f", 4/3*3.14*r*r*r);break;


  }


}
