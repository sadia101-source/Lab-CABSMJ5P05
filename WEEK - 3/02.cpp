#include <stdio.h>
#define N 100

int main(){
    int n, i, shortest;
    float burst[N];

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        printf("Enter burst time for Process %d: ", i + 1);
        scanf("%f", &burst[i]);
    }

    shortest = 0;
    for (i = 1; i < n; i++){
        if (burst[i] < burst[shortest]){
            shortest = i;
        }
    }

    printf("\nShortest Process = Process %d\n", shortest + 1);
    printf("Shortest Burst Time = %.2f\n", burst[shortest]);

    return 0;
}

