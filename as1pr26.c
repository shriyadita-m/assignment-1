#include<stdio.h>
int main(){
    int N,i;
    int evensum = 0;
    int oddsum = 0;
    printf("Enter a value N:    "); scanf("%d", &N);

    for(i=1; i<=N; i++){
        if(i%2 == 0){
            evensum += i ;
        } else {
            oddsum += i;
        }
    }

    printf("\nThe sum of all EVEN numbers between 1 and %d :  %d\n", N, evensum);
    printf("\nThe sum of all ODD numbers between 1 and %d :  %d\n", N, oddsum);
return 0;
}