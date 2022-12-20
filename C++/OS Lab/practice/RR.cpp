#include <iostream>
using namespace std;
void findWaitingTime(int n, int bt[], int wt[], int tat[], int tq)
{
    int rem_t[n];
    for (int i = 0; i < n; i++)
    {
        wt[i] = 0;
        rem_t[i] = bt[i];
    }
    int curr_time = 0;
    bool completed = false;
    while (!completed)
    {
        completed = true;
        for (int i = 0; i < n; i++)
        {
            if (rem_t[i] > 0)
            {
                completed = false;
                if (rem_t[i] > tq)
                {
                    curr_time += tq;
                    rem_t[i] -= tq;
                }
                else
                {
                    curr_time += rem_t[i];
                    rem_t[i] = 0;
                    tat[i] = curr_time;
                    wt[i] = curr_time - bt[i];
                }
            }
        }
    }
}
// void findTurnAroundTime(int n, int wt[], int bt[], int tat[])
// {
//     for (int i = 0; i < n; i++)
//     {
//         tat[i] = wt[i] + bt[i];
//     }
// }
void findAverageTime(int n, int bt[], int tq)
{
    int wt[n];
    int tat[n];
    findWaitingTime(n, bt, wt, tat, tq);
    // findTurnAroundTime(n, wt, bt, tat);

    int avg_wt = 0;
    int avg_tat = 0;
    for (int i = 0; i < n; i++)
    {
        avg_tat += tat[i];
        avg_wt += wt[i];
    }
    avg_tat /= n;
    avg_wt /= n;

    cout << "Average Waiting Time = " << avg_wt << endl;
    cout << "Average Turn Around Time = " << avg_tat << endl;
}
int main()
{
    int process[] = {1, 2, 3};
    int tq = 2;
    int n = sizeof(process) / sizeof(process[0]);
    int burst_times[] = {10, 5, 8};

    findAverageTime(n, burst_times, tq);
}