#include<stdio.h>
int main(){
    
    float prin, rate, time, sim_in;

    printf("ENTER PRINCIPAL VALUE:  ");
    scanf("%f", &prin);
    printf("ENTER RATE:  ");
    scanf("%f", &rate);
    printf("ENTER TIME:  ");
    scanf("%f", &time);

    sim_in = prin * rate * time / 100;

    printf("\nSI = PRT/100\n");
    printf("principal = %f\n", prin);
    printf(" rate = %f", rate);
    printf(" time = %f", time);
    printf("SIMPLE INTEREST = %.2f\n", sim_in);

    return 0;

}