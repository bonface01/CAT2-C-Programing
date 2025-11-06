/*
Name : Bonface Mutinda 
RegNo : CT101/G/26531/25
CAT 2 [Q3]
DESCRIPTION :
Program that calculates gross pay, taxes, and net pay for an employee.
The user enters hours worked and hourly wage.
Overtime (above 40 hours) is paid at time and a half.
Tax rate: 15% for the first $600, 20% for the rest.
*/

#include <stdio.h>

int main(void)
{
    float hours, wage, grossPay, tax, netPay;
    
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &wage);

    // Calculate gross pay
    if (hours <= 40)
        grossPay = hours * wage;
    else
        grossPay = (40 * wage) + ((hours - 40) * wage * 1.5);

    // Calculate tax
    if (grossPay <= 600)
        tax = 0.15 * grossPay;
    else
        tax = (0.15 * 600) + (0.20 * (grossPay - 600));

    // Calculate net pay
    netPay = grossPay - tax;

    // Display results
    printf("\nGross Pay : %.2f\n", grossPay);
    printf("Tax       : %.2f\n", tax);
    printf("Net Pay   : %.2f\n", netPay);

    return 0;
}
