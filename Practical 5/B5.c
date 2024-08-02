#include <stdio.h>

int main()
{
    int employee_number;
    float hours_worked, overtime_hours, overtime_pay, total_overtime_pay = 0;
    int count = 0, total_employees = 0, overtime_count = 0;

    printf("Enter employee number (-999 to end): ");
    scanf("%d", &employee_number);

    while (employee_number != -999)
    {
        printf("Enter hours worked by the employee: ");
        scanf("%f", &hours_worked);

        if (hours_worked <= 40)
        {
            overtime_hours = 0;
            overtime_pay = 0;
        }
        else
        {
            overtime_hours = hours_worked - 40;
            overtime_pay = overtime_hours * 200;
            total_overtime_pay += overtime_pay;
            overtime_count++;
        }

        printf("Employee number: %d\n", employee_number);
        printf("Overtime payment: %.2f\n", overtime_pay);

        total_employees++;
        printf("\nEnter employee number (-999 to end): ");
        scanf("%d", &employee_number);
    }

    printf("\nTotal number of employees: %d\n", total_employees);
    printf("Total overtime payment: %.2f\n", total_overtime_pay);
    printf("Percentage of employees whose overtime payment exceeds Rs. 4000/-: %.2f%%\n", ((float)overtime_count / total_employees) * 100);

    return 0;
}
