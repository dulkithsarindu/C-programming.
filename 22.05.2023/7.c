#include<stdio.h>
int main()
{
   float sal_bonus, sal_am, exp_bonus, bsal, loc_all, tot_all;
   int exp;
   char name[30], loc;
   printf("Enter your name:");
   scanf("%s", &name);
   printf("Enter your basic salary:");
   scanf("%f", &bsal);
   printf("Are you working in colombo?(Press \"C\" for Yes, Press \"N\" for No)");
   scanf("%s", &loc);
   printf("Enter sales amount");
   scanf("%f", &sal_am);
   printf("Enter your job experience(years):");
   scanf("%d", &exp);

   if(exp>=5)
   exp_bonus=bsal*0.1;
   else
   exp_bonus=0;

   if((loc=='c')||(loc=='c'))
    loc_all+=2500;
   else
    loc_all=0;

    if(sal_am>=50000)
    sal_bonus=sal_am*0.15;
    else if(sal_am>=25000)
    sal_bonus=sal_am*0.12;
    else
    sal_bonus=sal_am*0.1;

    tot_all=bsal+exp_bonus+loc_all+sal_bonus;

    printf("Hi, %s", name);
    printf("Total Allowances=%2f", tot_all);
}
