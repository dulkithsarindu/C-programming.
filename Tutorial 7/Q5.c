#include<stdio.h>
void find_sum()
{
    int no1, no2, sum;
    printf("Enter two numbers");
    scanf("%d %d", &no1,&no2);
    sum=no1+no2;
    printf("The sum of two numbers=%d", sum);
    printf("\n");
}
int main()
{
    find_sum();
    find_sum();
}
