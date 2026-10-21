#include<stdio.h>
int main(){
    int number, i;
    printf("ENTER VALUE:   "); scanf("%d", &number);

    for(i=1; i<=number; i +=2){
        if(i%2 != 0){
            printf("%d", i)
           }
        
    }
    return 0;
}
