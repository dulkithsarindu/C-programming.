#include<stdio.h>
int main()
{
    int arr[10], i, max=0, min, total=0;
    float avg;
    for(i=0;i<10;i++)
    {
        printf("Enter value for the element %d in arr:", i+1);
        scanf("%d", &arr[i]);
    }
    min=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]<min){
        min=arr[i];}
        if(arr[i]>max){
        max=arr[i];}
        total=total+arr[i];
    }
    avg=total/10;
    printf("Minimum=%d", min);
    printf("Maximum=%d\n", max);
    printf("Average=%d\n", avg);

    for(i=9;i>=0;i--)
    {
        printf("%d\n", arr[i]);
    }
}

