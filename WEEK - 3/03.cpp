#include <stdio.h>
#define N 100
int main(){
    int n, i, j;
    int arrival[N], temp;
    int process[N];

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (i=0; i<n; i++){
        process[i] = i + 1;

        printf("Enter arrival time for Process %d: ", process[i]);
        scanf("%d", &arrival[i]);
    }

    // sorting by arrival time
    for (i = 0; i < n - 1; i++){
        for (j = i + 1; j < n; j++) {
            if (arrival[i] > arrival[j]) {
                
                temp = arrival[i];
                arrival[i] = arrival[j];
                arrival[j] = temp;

                temp = process[i];
                process[i] = process[j];
                process[j] = temp;
            }
        }
    }

    printf("\nProcesses in Arrival Time Order:\n");
    for (i=0; i<n; i++){
        printf("Process %d - Arrival Time: %d\n", process[i], arrival[i]);
    }

    return 0;
}

