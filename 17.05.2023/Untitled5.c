 #include<stdio.h>
                int main()
                {
                int no1;
                float no2;
                double no3;
                char ch;

               printf("Enter any number:");
               scanf("%d", &no1);
               printf("Enter floating point number:");
               scanf("%f", &no2);
               printf("Enter double precision number:");
               scanf("%lf", &no3);
               printf("Enter any character you want:");
               scanf("%c", &ch);

               printf("\nThe number you entered= %d \n", no1);
               printf("Floating point number entered= %f \n", no2);
               printf("Double precision number entered= %f \n", no3);
               printf("Character you entered=%c", ch);

}
