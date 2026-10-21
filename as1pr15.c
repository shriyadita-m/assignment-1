#include<stdio.h>
int main(){
    int s1, s2, s3, s4, s5, total;
    float percentage;
   
    printf("Marks obtained in s1: "); scanf("%d", &s1);
    printf("Marks obtained in s2: "); scanf("%d", &s2);
    printf("Marks obtained in s3: "); scanf("%d", &s3);
    printf("Marks obtained in s4: "); scanf("%d", &s4);
    printf("Marks obtained in s5: "); scanf("%d", &s5);

    total = s1+s2+s3+s4+s5;
    percentage = (total / 500) *100;

    printf("\n Total marks obtained by the student out of 500:   %d ", total);
    printf("\n Percentage marks obtained by student:   %.2f ", percentage);
    
    if (percentage>= 60){
        printf("Result : First");
    } 
    else if (percentage >=40){
        printf("Result : Passed");
    } 
    else if(percentage <=30){
        printf("Result : Fail"); }
    
    
    return 0;

}