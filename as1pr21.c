#include<stdio.h>
int main(){
    int num1, num2;
    char calc;
    printf("Enter the calculation to be done [ex: +,-,*,/]:   "); scanf("%c", &calc);
    printf("Enter two numbers:  "); scanf("%d,%d", &num1, &num2);

    switch(calc){
        case '+' :
        printf(" %d + %d = %d", num1, num2, num1 + num2);
        break;

        case'-' :
        printf("%d - %d = %d", num1, num2, num1 - num2);
        break;

        case'*' :
        printf("%d * %d = %d", num1, num2, num1 * num2 );
        break;

        case '/' :
        printf("%d / %d = %d", num1, num2, num1/num2);
        break;

        default:
        printf(" the calculation cannot be calculated.");

    }

    return 0;
    
}