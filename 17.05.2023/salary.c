#include<stdio.h>
int main()
{
  float r, d, circ, area;

  printf("Enter radius of the circle");
  scanf("%f", &r);

  d=2*r;
  circ=2*3.14159*r;
  area=3.14159*r*r;

  printf("Diameter of the circle=%f\n", d);
  printf("Circumference of the circle=%f\n", circ);
  printf("Area of the circle=%f", area);

}
