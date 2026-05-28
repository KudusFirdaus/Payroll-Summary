#include <stdio.h>
#define HOURLY_RATE 25

int main(){

    //initializing variables
    float hoursWorked,bonus;
    float basicPay, grossPay, deduction, netPay;

    //accepting user input
    printf("Enter the number of hours worked: ");
    scanf("%f",&hoursWorked);
    printf("Enter your bonus amount: ");
    scanf("%f",&bonus);

    //operations
    basicPay = hoursWorked * HOURLY_RATE;
    grossPay = basicPay + bonus;
    deduction = grossPay * 0.08;
    netPay = grossPay - deduction;

    //displaying information
    printf("=========Payroll Summary=========\n");
    printf("Hours Worked     : %.0fhrs\n",hoursWorked);
    printf("Bonus            : %.2fGHC\n",bonus);
    printf("Basic Pay        : %.2fGHC\n",basicPay);
    printf("Gross Pay        : %.2fGHC\n",grossPay);
    printf("Pension deduction: %.2fGHC\n",deduction);
    printf("NET PAY          : %.2fGHC\n",netPay);

    return 0;
}