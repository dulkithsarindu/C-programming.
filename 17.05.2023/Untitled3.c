#include<stdio.h>
int main()
{
float fahr, cels;

   printf("Enter Temperature in Fahrenheit:");
   scanf("%f", &fahr);

   cels=(5.0/9.0)*(fahr-32);

   printf("Celsius:%f", cels);

}
