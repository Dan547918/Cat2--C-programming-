/*
Name: Duncan Mugambi Gitonga
Reg No:CT101/G/26547/25
Descriprion: cat 2 q2 instructions code
*/


#include <stdio.h>

int main() {

float hours_worked, hourly_wage, gross_pay, taxes, net_pay;

      // user input for hours worked and hourly wage

    printf("Enter hours worked in a week: ");

    scanf("%f", &hours_worked);
    printf("Enter the hourly wage: ");

    scanf("%f", &hourly_wage);
  
    // Calculate Gross Pay

    float regular_hours = 40.0;

    float overtime_rate = 1.5;
  
    if (hours_worked > regular_hours) {

        float regular_pay = regular_hours * hourly_wage;

        float overtime_hours = hours_worked - regular_hours;

        float overtime_pay = overtime_hours * hourly_wage * overtime_rate;

        gross_pay = regular_pay + overtime_pay;

    } else {

        gross_pay = hours_worked * hourly_wage;

    }    

    // Calculate Taxes

    float tax_rate_first_600 = 0.15;

    float tax_rate_rest = 0.20;

    float tax_threshold = 600.0;    

    if (gross_pay <= tax_threshold) {

        taxes = gross_pay * tax_rate_first_600;

    } else {

        taxes = (tax_threshold * tax_rate_first_600) + ((gross_pay - tax_threshold) * tax_rate_rest);

    }
    // Calculate Net Pay

    net_pay = gross_pay - taxes;

    

    // Print  results

    printf("\n--- Payroll Summary ---\n");

    printf("Gross Pay: $%.2f\n", gross_pay);

    printf("Taxes: $%.2f\n", taxes);

    printf("Net Pay: $%.2f\n", net_pay);

    return 0;

}
