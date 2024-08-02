#include<stdio.h>
void math_op(int no1, int no2)
{
    int sum, diff, prod;
    sum=no1+no2;
    diff=no1-no2;
    prod=no1*no2;
    printf("The Sum=%d\nThe Difference=%d\nThe Product=%d", sum, diff, prod);
}
int main()
{
    math_op(45,56);
}
