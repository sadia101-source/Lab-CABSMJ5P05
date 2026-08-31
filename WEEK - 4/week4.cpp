#include <stdio.h>

// 1
struct Process {
    int pid;
    int arrival_time;
    int burst_time;
    int completion_time;
};

// 2.1 (input)
void inputProcesses(struct Process p[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of Process %d\n", i + 1);
        printf("PID: ");
        scanf("%d", &p[i].pid);
        printf("Arrival Time: ");
        scanf("%d", &p[i].arrival_time);
        printf("Burst Time: ");
        scanf("%d", &p[i].burst_time);
    }
}
// 2.2 (display)
void displayProcesses(struct Process p[], int n) {
    printf("\nPID\tAT\tBT\tCT\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\n",
               p[i].pid,
               p[i].arrival_time,
               p[i].burst_time,
               p[i].completion_time);
    }
}


// 3
void calculateCompletionTime(struct Process p[], int n) {
    for (int i = 0; i < n; i++) {
        p[i].completion_time = p[i].arrival_time + p[i].burst_time;
    }
}

// 4
void findSJN(struct Process p[], int n, int current_time) {
    int index = -1;
    int minBurst = 9999;

    for (int i = 0; i < n; i++) {
        if (p[i].arrival_time <= current_time && p[i].burst_time < minBurst) {
            minBurst = p[i].burst_time;
            index = i;
        }
    }

    if (index != -1) {
        printf("\nNext Process (SJN): P%d", p[index].pid);
        printf("\nBurst Time: %d\n", p[index].burst_time);
    } else {
        printf("\nNo process is ready at time %d.\n", current_time);
    }
}

//execution.
int main() {
    int n, current_time;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    struct Process p[n];

    inputProcesses(p, n);
    calculateCompletionTime(p, n);
    displayProcesses(p, n);

    printf("\nEnter current time to find SJN process: ");
    scanf("%d", &current_time);

    findSJN(p, n, current_time);

    return 0;
}
