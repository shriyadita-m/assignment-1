#include<stdio.h>
int main(){
    int number,i, prime;
    printf("Enter a value:  "); scanf("%d", &number);

    for(i = 2; i * i <= number; i++){
        if(number% i == 0){
            prime = 0;
            break;
        }
            }

            printf("Prime");
}