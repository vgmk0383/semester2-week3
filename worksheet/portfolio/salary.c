
#include <stdio.h>

/*
 * Portfolio submission
 * Name: Joshua Daniel
 * ID: 201973385
 */

int main( void ) {

    double salary = 36250.00;
    double ni_rate = 8.0;
    double tax_rate = 15.0;
    double ni_contribution;
    double taxable_amount;
    double tax_contribution;
    double take_home_salary;

    ni_contribution = salary * (ni_rate / 100.0);
    taxable_amount = salary - ni_contribution - 12500.0;

    if (taxable_amount < 0) {
        taxable_amount = 0;
    }

    tax_contribution = taxable_amount * (tax_rate / 100.0);
    take_home_salary = salary - ni_contribution - tax_contribution;

    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni_contribution);
    printf("Tax contribution £%.2f\n", tax_contribution);
    printf("Take home salary £%.2f\n", take_home_salary);

    return 0;
}
