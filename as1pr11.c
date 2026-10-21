#include<stdio.h>
int main(){
    long int totalseconds;
    int hours, minutes, seconds;

    printf("Enter the total seconds:    "); scanf("%ld", &totalseconds);

    hours = totalseconds/3600;
    minutes = totalseconds / 60;
    seconds = totalseconds%60;

    printf("The no. of hours:   %d", hours);
    printf("The no. of minutes:   %d", minutes);
    printf("The no. of seconds:   %d", seconds);

    return 0;

}