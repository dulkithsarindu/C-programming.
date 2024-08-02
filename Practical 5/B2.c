#include <stdio.h>

int main()
{
    int i;
    int marks[10];
    int max = 0;
    int min = 100;
    float avg = 0;
    int sum = 0;

    printf("Enter the marks of 10 students:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] > max)
        {
            max = marks[i];
        }

        if (marks[i] < min)
        {
            min = marks[i];
        }

        sum += marks[i];
    }

    avg = (float)sum / 10;

    printf("\nMaximum marks: %d\n", max);
    printf("Minimum marks: %d\n", min);
    printf("Average marks: %.2f\n", avg);

    return 0;
}
