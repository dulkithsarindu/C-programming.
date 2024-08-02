#include<stdio.h>
int findquotient(no1, no2)
{
    int q;
    q=no1/no2;
return q;
}
int main()
{
    int no1, no2;
    printf("Enter two numbers");
    scanf("%d %d", &no1,&no2);
    printf("The quotient of numbers=%d", findquotient(no1,no2));
}
