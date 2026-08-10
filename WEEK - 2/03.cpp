#include <stdio.h>

int main(){
    int n;
    float totalTime, throughput;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter total time: ");
    scanf("%f", &totalTime);

    throughput = n / totalTime;
    printf("Throughput = %.2f processes (per time unit).\n", throughput);

    return 0;
}

