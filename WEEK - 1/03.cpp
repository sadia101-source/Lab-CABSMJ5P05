#include <stdio.h>

int main(){
    int processes, time, overhead;

    printf("Enter number of processes: ");
    scanf("%d", &processes);

    printf("Enter context switch time (in sec): ");
    scanf("%d", &time);

    overhead = (processes * time);
    printf("\nTotal Context Switch Overhead = %d sec\n", overhead);

    return 0;
}

