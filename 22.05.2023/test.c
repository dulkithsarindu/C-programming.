#include<stdio.h>
int main()
{
    int no1, no2, no3, max, min;

    printf("Enter any three numbers");
    scanf("%d %d %d", &no1, &no2, &no3);
    if (no2<no1>no3)
        max=no1;
        else if (no2>no3)
        max=no2;
        else
            max=no3;

        if(no2>no1<no3)
            min=no1;
        else if (no2<no3)
            min=no2;
        else
            min=no3;

        printf("Highest value=%d", max);
        printf("Lowest value=%d", min);


}




