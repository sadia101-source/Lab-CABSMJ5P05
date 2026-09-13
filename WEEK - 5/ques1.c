# include <stdio.h>

struct Process {
	int pid;
	int completion_time;
	int arrival_time;
	int burst_time;
};

typedef struct Process Process;

int main(){
	int n, i, turnaround_time, waiting_time;
	printf("Enter number of processes: ");
	scanf("%d", &n);
	Process p[n];
	for (i = 0; i < n; i++) {
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
		turnaround_time = p[i].completion_time - p[i].arrival_time;
		waiting_time = turnaround_time - p[i].burst_time;
		printf("PID %d: Turnaround Time = %d, Waiting Time = %d\n", p[i].pid, turnaround_time, 	waiting_time); 
	}

}

