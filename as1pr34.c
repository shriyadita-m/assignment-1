#include<stdio.h>
int main(){
    int N;  
    long long term1 = 0, term2 = 1, nexterm;

    printf("Enter the number os terms needed:   "); scanf("%d", &N);
    printf("The Fibbonacci series:  ");

    for(int i = 0; i <=N; i++){
     printf("%lld\n", term1);

        nexterm = term1 + term2;
        term1 = term2;
        term2 = nexterm;
    }
    printf("\n");
    return 0;
}