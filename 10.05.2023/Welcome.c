#include<stdio.h>
int main()
{
float fahr, cels;

   printf("Enter Temperature in Fahrenheit");
   scanf("%f", &fahr);

   cels=(fahr-32)*(5.0/9.0);

   printf("Celsius:%f", cels);

}
