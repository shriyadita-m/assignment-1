#include<stdio.h>
int main(){
    int x, n, y;
    printf("Enter value of X: "); scanf("%d", &x);
    scanf("%d", &n);

    if(n==1){
        y= 1+x;
    }
    else if(n==2){
        y=1+(x/n);
    }
    else if(n==3){
        y=1+(x*x*x);
    }
    else {
        y = 1+n*x;
    }

    printf("Answer : %d \n", y);

    return 0;

}