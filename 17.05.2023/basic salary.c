#include<stdio.h>
int main()
{
 char name[20];
 float bsal, nsal;

 printf("Enter your name");
 scanf("%s", &name);
 printf("Enter your basic salary");
 scanf("%f", &bsal);

 if (bsal<5000)
     nsal=bsal+((bsal/100)*5);
 else if
    (5000<=bsal<10000)
     nsal=bsal+((bsal/100)*10);
 else
    (bsal>=10000);
    nsal=bsal+((bsal/100)*15);

 printf("Hi,%s \n", name);
 printf("Your new salary=%f", nsal);


}
