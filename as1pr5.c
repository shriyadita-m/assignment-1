#include<stdio.h>
int main(){

    int a, b, p;

    printf("\n Enter a value : "); scanf("%d", &a);
    printf("\n Enter another value : "); scanf("%d", &b);

    printf("\n BEFORE SWAPPING: a = %d, b = %d\n", a, b);

    //lets change the numbers a to b and viceversa//
    p = a; a = b, b = p;

    printf(" \nAFTER SWAPPING: a = %d, b = %d\n", a, b);

    return 0;

}