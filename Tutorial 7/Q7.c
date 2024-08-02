#include<stdio.h>
double find_prod(int no1, float no2)
{
    double prod;
    prod=no1*no2;
return prod;
}
int main()
{
    printf("The product of two numbers=%.2f", find_prod(45,56));
}
