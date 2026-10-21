#include<stdio.h>
int main(){

    int a, b;

    printf("\n Enter a value : "); scanf("%d", &a);
    printf("\n Enter another value : "); scanf("%d", &b);

    printf("\n BEFORE SWAPPING: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b ;
    a = a - b ;

    printf(" \nAFTER SWAPPING: a = %d, b = %d\n", a, b);

    return 0;

}