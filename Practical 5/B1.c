#include<stdio.h>
int main()
{
  int no, count=1, p=0, n=0, z=0;
  while(count<=10)
  {
    printf("Enter %d number:", count);
    scanf("%d", &no);
    if(no>0)
    p++;
    else if(no<0)
    n++;
    else
    z++;
    count++;
  }
  printf("Number of positives=%d\nNumber of negatives=%d\nNumber of zeros=%d", p, n, z);
}
