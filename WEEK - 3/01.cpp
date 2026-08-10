#include <stdio.h>
#define N 100

int main(){
    int n, i;
    float burst[N], total = 0, average;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (i=0; i<n; i++){
        printf("Enter burst time for Process %d: ", i + 1);
        scanf("%f", &burst[i]);
        total = total + burst[i];
    }

    average = total/n;

    printf("\nTotal Burst Time = %.2f\n", total);
    printf("Average Burst Time = %.2f\n", average);

    return 0;
}

