#include <stdio.h>
#define N 20

int main(){
    int n, i;
    char process[N][N];

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter process names in ready queue order:\n");
    
    for (i=0; i<n; i++){
        printf("Process %d: ", i + 1);
        scanf("%s", process[i]);
    }

    printf("\nReady Queue Execution Order:\n");
    for (i=0; i<n; i++){
        printf("%s", process[i]);
        if (i < n - 1) {
            printf(" -> ");
        }
    }
    printf("\n");

    return 0;
}

