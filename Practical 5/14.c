#include<stdio.h>
int main()
{
  int i, arr[10], even=0, odd=0;
  for(i=0;i<10;i++)
  {
    printf("Enter value to the element %d :", i+1);
    scanf("%d", &arr[i]);
    if(arr[i]%2==0)
        even++;
    else
        odd++;
  }
  printf("Number of even values=%d", even);

}
