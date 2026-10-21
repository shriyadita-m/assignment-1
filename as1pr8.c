#include<stdio.h>
int main(){
    int days, hours, minutes;
    long int period = 31558150;

    days = period/216000;
    hours = period/3600;
    minutes = hours%60;

    printf("Days = %ld, Hours = %ld, Minutes = %ld", days, hours, minutes);
    return 0;


}