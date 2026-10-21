#include<stdio.h>
int main(){
    int num1, num2, answer;
    char op;
    printf("Operation to be done (+,-,*,/):  ");
    scanf("%c", &op);
    printf("Enter the two numbers:  "); 
    scanf("%d,%d", &num1, &num2);

    
        if(op = '+'){
        answer = num1 + num2;
        printf("%d + %d = %d", num1, num2, answer);}

        else if(op = '-'){
        answer = num1 - num2;
        printf("%d - %d = %d", num1, num2, answer); }
        
        else if(op = '*'){
        answer = num1 * num2;
        printf("%d * %d = %d", num1, num2, answer); }

        else if(op = '/'){
        answer = num1 / num2;
        printf("%d / %d = %d", num1, num2, answer); }
        
 return 0;
}