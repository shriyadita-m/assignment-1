#include<stdio.h>
int main(){
    int number, i;
    printf("ENTER VALUE:   "); scanf("%d", &number);

    for(i=0; i<=number; i = i +2){
     printf("%d", i);
        
    }
    return 0;
}



/*#include<stdio.h>
int main(){
    int n=4, a[4] = {5,2,8,3};
    int n1=n;
    for(int i=0; i<n; i++){
        for(int j=n-i+1; j>1;j--){
            printf(" ");
        }
        for(int k=0; k<=i;k++){
            printf("%d", a[k]);
            if(k==i){
                for(int l=)
            }
        }
    }
}*/
