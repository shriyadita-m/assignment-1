#include<stdio.h>
int main(){
    int number, i;
    long int factorial = 1;
    printf("Enter the number for which factorial required:  ");
    scanf("%d", &number);

    for(i=1; i<=number; i++){
        factorial *= i;
    }
   printf("%d factorial = %ld\n", number, factorial);

    return 0;
}
