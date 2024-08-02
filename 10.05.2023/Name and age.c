#include<stdio.h>
int main()
{
  int byear, age;
  char name[15];

  printf("Enter your Name");
  scanf("%s", &name);
  printf("Enter your birth year");
  scanf("%d", &byear);

  age=2023-byear;

  printf("Name you entered:%s \n Your age:%d", name, age);
}
