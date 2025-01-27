#include<stdio.h>
#include<string.h>

typedef struct process {
    int pid;
    char pname[10];
    int at;
    int bt;
    int ct;
    int tt;
    int wt;
} fcfs;

void getprocess(fcfs p[100], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter the %d Process PID: ", i + 1);
        scanf("%d", &p[i].pid);
        printf("Enter the %d Process Name: ", i + 1);
        scanf("%s", p[i].pname);
        printf("Enter the %d Process Arrival time: ", i + 1);
        scanf("%d", &p[i].at);
        printf("Enter the %d Process Burst time: ", i + 1);
        scanf("%d", &p[i].bt);
    }
}

void sort(fcfs p[100], int n) {
    int i, j;
    fcfs temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (p[j].at > p[j + 1].at) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

void print(fcfs p[100], int n) {
    int i;
    printf("\nSorted Process List (by Arrival Time):\n");
    printf("PID\tName\tAT\tBT\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%d\n", p[i].pid, p[i].pname, p[i].at, p[i].bt);
    }
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    fcfs processes[100];
    getprocess(processes, n);
    sort(processes, n);

    print(processes, n);

    return 0;
}

