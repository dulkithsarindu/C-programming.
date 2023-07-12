#include<stdio.h>
int main()
{
   int size, size1;
   printf("Enter size of first array:");
   scanf("%d", &size);
   int a, sum=0, sum1=0, mul=1, mul1=1 , arr[size], arr1[size];
   printf("Enter values for the first array\n\n");
   for(a=0;a<size;a++)
   {
       printf("Enter value to the element %d:", a+1);
       scanf("%d", &arr[a]);
       sum=sum+arr[a];
       mul=mul*arr[a];

   }
   printf("Enter values to the second array\n\n");
   for(a=0;a<size;a++)
   {
       printf("Enter values to the element %d:", a+1);
       scanf("%d", &arr1[a]);
       sum1=sum1+arr1[a];
       mul1=mul1*arr1[a];
   }
    printf("scalar sum of first array=%d\n", sum);
    printf("Scalar sum of second array%d\n", sum1);
    int arr2[size], arr3[size];
   for(a=0;a<size;a++)
   {
     arr2[a]=arr[a]+arr1[a];
   }
   for(a=0;a<size;a++)
   {
       printf("%d\t", arr2[a]);
   }
   for(a=0;a<size;a++)
   {
       arr3[a]=arr[a]*arr1[a];
   }
   printf("\n\n");
   for(a=0;a<size;a++)
   {
       printf("%d\t", arr3[a]);
   }
   printf("\n\n");
   printf("Scalar product of first array=%d\n", mul);
   printf("Scalar product of second array=%d", mul1);

}
