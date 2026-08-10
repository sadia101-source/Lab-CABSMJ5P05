#include <stdio.h>
#define N 100
#define P 20

int main(){
    int n, i;
    char queue[N][P];
    
    printf("Enter number of processes: ");
    scanf("%d", &n);
    
    printf("\nEnter process names:\n");
    
    for (i=0; i<n; i++){
        printf("Process %d: ", i + 1);
        scanf("%s", queue[i]);
    }
    
    printf("\nReady Queue:\n");
    for (i=0; i<n; i++){
        printf("%s", queue[i]);
        if (i < n - 1){
            printf(" -> ");
        }
    }
    printf("\n");
    
    return 0;
}
