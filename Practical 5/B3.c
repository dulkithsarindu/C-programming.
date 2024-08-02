#include<stdio.h>
int main()
{
  int price, itm, avg, count=1, itm1, tot=0;
  while(count<=10)
  {
    printf("Enter price of an item %d:", count);
    scanf("%d", &price);

    if(price>200)
    itm++;
    else
    itm1++;

    tot=tot+price;
    count++;
  }
  avg=tot/10;
  printf("Average price=%d\nNumber of items which's price is greater than 200=%d", avg,itm);

}
