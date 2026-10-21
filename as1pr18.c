#include<stdio.h>
int main(){
    int a,b,c, max;
    printf("Enter the values: "); scanf("%d, %d, %d", &a, &b, &c);
    max = (a>=b && a>=c)? printf("a is max\n") : printf("a is not max\n");
    max = (b>=a && b>=c)? printf("b is max\n") : printf("b is not max\n");
    max = (c>=a && c>=b) ? printf("c is max\n") : printf("c is not max\n");

    return 0;

    }
