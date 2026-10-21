#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter the three values : "); scanf("%d, %d, %d", &a,&b,&c);

    if( a>=b && a>=c){
        printf("%d is the max", a);
    } else if(b>=a && b>=c){
        printf("%d is the max", b);
    } else{
        printf("%d is the max", c);
    }
    return 0;
}
