#include<stdio.h>
int main(){
    int number, i, q, sum =0, ognum;
    
    printf("Enter the number: "); scanf("%d", &number);
    ognum = number;
    while(number !=0){
        q = number%10;
        sum = sum + q*q*q;
        number = number/10;
    }

    if(sum== ognum){
        printf("An Arsmtrong number\n");
    }
    else{
        printf("NOt an Armstrong number\n");
    }

    return 0;
}