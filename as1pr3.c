#include<stdio.h>
int main(){

    float gross, basic, hra, other, bonus;

    printf("Enter your Basic Salary:    "); scanf("%f", &basic);
    printf("Enter your House Rent Allowance:    "); scanf("%f", &hra);
    printf("Enter your Other Income:    "); scanf("%f", &other);
    printf("Enter your Bonus income:    "); scanf("%f", &bonus);

    gross = basic + hra + other + bonus ;
    printf("\n YOUR GROSS SALARY:   %.2f\n", gross);
    return 0;

}