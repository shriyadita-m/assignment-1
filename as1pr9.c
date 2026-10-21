#include<stdio.h>
int main(){
    int hours, minutes, seconds;
    long int totalseconds;

    printf("Enter hours :   "); scanf("%d", &hours);
    printf("Enter mintutess :   "); scanf("%d", &minutes);
    printf("Enter seconds :   "); scanf("%d", &seconds);

    totalseconds = (hours * 3600) + (minutes * 60) + seconds ;

    printf("\n TOTAL SECONDS = %ld", totalseconds);

    return 0;
}