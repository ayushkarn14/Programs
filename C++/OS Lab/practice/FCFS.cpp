#include <iostream>
using namespace std;
void findWaitingTime(int n, int wt[], int bt[], int at[])
{
    int service_time[n];
    service_time[0] = at[0];
    wt[0] = 0;
    for (int i = 1; i < n; i++)
    {
        service_time[i] = service_time[i - 1] + bt[i - 1];
        wt[i] = service_time[i] - at[i];
        if (wt[i] < 0)
            wt[i] = 0;
    }
}
void findTurnAroundTime(int n, int wt[], int bt[], int tat[])
{
    for (int i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
    }
}
void findAverageTime(int n, int bt[], int at[])
{
    int wt[n];
    int tat[n];
    findWaitingTime(n, wt, bt, at);
    findTurnAroundTime(n, wt, bt, tat);
    float avg_wt = 0;
    float avg_tat = 0;
    for (int i = 0; i < n; i++)
    {
        avg_wt += wt[i];
        avg_tat += tat[i];
    }
    cout << "Average waiting time = " << avg_wt / n << endl;
    cout << "Average turn around time = " << avg_tat / n << endl;
}
int main()
{
    int processes[] = {1, 2, 3};
    int n = sizeof(processes) / sizeof(processes[0]);
    int burst_times[] = {5, 9, 6};
    int arrival_times[] = {0, 3, 6};
    findAverageTime(n, burst_times, arrival_times);
}