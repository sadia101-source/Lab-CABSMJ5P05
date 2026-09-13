#include <stdio.h>

int main() {
    int burst[3];
    int completion[3];
    int i, time = 0;

    // Input burst times
    printf("Enter burst time for P1: ");
    scanf("%d", &burst[0]);

    printf("Enter burst time for P2: ");
    scanf("%d", &burst[1]);

    printf("Enter burst time for P3: ");
    scanf("%d", &burst[2]);

    // Calculate completion times
    for (i = 0; i < 3; i++) {
        time += burst[i];
        completion[i] = time;
    }

    // Display Gantt Chart
    printf("\nGantt Chart:\n");

    printf("+");
    for (i = 0; i < 3; i++) {
        printf("---------+");
    }
    printf("\n");

    printf("|");
    for (i = 0; i < 3; i++) {
        printf("   P%d    |", i + 1);
    }
    printf("\n");

    printf("+");
    for (i = 0; i < 3; i++) {
        printf("---------+");
    }
    printf("\n");

    // Display time values
    printf("0");
    for (i = 0; i < 3; i++) {
        printf("%10d", completion[i]);
    }
    printf("\n");

    return 0;
}
