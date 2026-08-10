#include <stdio.h>

int main() {
    int sec, hh, mm, ss;

    printf("Enter CPU burst time (in seconds): ");
    scanf("%d", &sec);

    hh = (sec / 3600);

    mm = ((sec%3600) / 60);
    ss = (sec % 60);

    printf("\nCPU Burst Time = %02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}
