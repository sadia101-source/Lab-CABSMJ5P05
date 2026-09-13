# include <stdio.h>

struct Process {
	int pid;
	int completion_time;
	int arrival_time;
	int burst_time;
};

typedef struct Process Process;

int main(){
	int n, i, j;
float response_ratio;
	printf("Enter number of processes: ");
	scanf("%d", &n);
	Process p[n], temp;
	for ( i = 0; i < n; i++) {
		printf("\nEnter details for Process %d:\n", i + 1);

		printf("PID: ");
		scanf("%d", &p[i].pid);
		
		printf("Completion time: ");
		scanf("%d", &p[i].completion_time);

		printf("Arrival Time: ");
		scanf("%d", &p[i].arrival_time);

		printf("Burst Time: ");
		scanf("%d", &p[i].burst_time);
	    }
	for ( i = 0; i < n; i++){
		for(j = 0; j< n- 1- i; j++){
			if(p[i].arrival_time < p[i + 1].arrival_time){
				temp = p[i];
				p[i] = p[i+1];
				p[i+1] = temp;
			}
		}
	}
	for ( i = 0; i < n; i++){
		printf("PID = %d", p[i].pid);
		
		if (i != n - 1){
			printf(" -> ");
		}
	}

}
