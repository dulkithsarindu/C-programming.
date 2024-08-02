#include<stdio.h>
void sum_difference(int no1,int no2)
{
    int sum, diff;
    sum=no1+no2;
    diff=no1-no2;
    printf("The Sum is=%d\nThe difference=%d", sum, diff);

}
int main()
{
    sum_difference(45,26);
}
