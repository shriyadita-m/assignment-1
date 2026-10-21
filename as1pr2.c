#include<stdio.h>
int main(){
    float math, sci, telugu, evs, social, total, percentage;

    printf("Marks obtained in math: "); scanf("%f", &math);
    printf("Marks obtained in telugu: "); scanf("%f", &telugu);
    printf("Marks obtained in evs: "); scanf("%f", &evs);
    printf("Marks obtained in social: "); scanf("%f", &social);
    printf("Marks obtained in sci: "); scanf("%f", &sci);

    total = math + telugu + sci + evs + social ;
    percentage = total / 100;

    printf("\n Total marks obtained by the student :   %f ", total);
    printf("\n Percentage marks obtained by student:   %f ", percentage);

    return 0;

}