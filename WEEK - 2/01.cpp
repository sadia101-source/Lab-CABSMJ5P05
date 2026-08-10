#include <stdio.h>

int main(){
    float busy_time, idle_time, utilization;

    printf("Enter busy time: ");
    scanf("%f", &busy_time);

    printf("Enter idle time: ");
    scanf("%f", &idle_time);

    utilization = (busy_time / (busy_time + idle_time)) * 100;
    printf("\nCPU Utilization = %.2f%% \n", utilization);

    return 0;
}
