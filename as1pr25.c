#include<stdio.h>
int main(){
    int number, i;

    printf("Enter the number to generate its multiplicative table:  ");
    scanf("%d", &number);

//    printf("The multipli")//

    for(i=1; i<=10; i++){
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}