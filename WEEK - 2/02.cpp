#include <stdio.h>
#define N 5

int main(){
    int priority[N];
    int i, first = 0;

    printf("Enter priorities for %d processes:\n", N);
    printf("1 = High, 2 = Medium, 3 = Low\n");

    for (i=0; i<N; i++){
        printf("Enter priority for Process %d: ", i + 1);
        scanf("%d", &priority[i]);
    }

    for (i=1; i<N; i++){
        if (priority[i] < priority[first]) {
            first = i;
        }
    }

    printf("\nProcess %d will run first.\n", first + 1);
    printf("Priority = %d\n", priority[first]);

    return 0;
}
