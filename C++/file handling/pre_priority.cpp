#include <iostream>
using namespace std;
int selectProcess(int n, int pid[], int pri[], int at[], int t, bool done[])
{
    int min = INT32_MAX;
    int to_run = -1;
    for (int i = 0; i < n; i++)
    {
        if (pri[i] < min && at[i] <= t && !done[i])
        {
            to_run = pid[i];
            min = pri[i];
        }
    }
    return to_run;
}
void findAverage(int n, int pid[], int bt[], int pri[], int at[], bool done[])
{
    int tat[n];
    int wt[n];
    int completed = 0;
    int curr_time = 0;
    int rem[n];
    for (int i = 0; i < n; i++)
        rem[i] = bt[i];
    while (completed != n)
    {
        int to_run = selectProcess(n, pid, pri, at, curr_time, done);
        if (to_run != -1)
        {
            rem[to_run - 1]--;
            curr_time++;
            if (rem[to_run - 1] == 0)
            {
                int completion_time = curr_time;
                tat[to_run - 1] = completion_time - at[to_run - 1];
                wt[to_run - 1] = tat[to_run - 1] - bt[to_run - 1];
                done[to_run - 1] = true;
                completed++;
            }
        }
        else
            curr_time++;
    }
    float s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + wt[i];
    }
    cout << "Average wt = " << s / n << endl;
    s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + tat[i];
    }
    cout << "Average tat = " << s / n << endl;
}
int main()
{
    int pid[] = {1, 2, 3};
    int n = sizeof(pid) / sizeof(pid[0]);
    int bt[] = {3, 6, 1};
    int pri[] = {5, 4, 9};
    int at[] = {0, 1, 3};
    bool done[] = {false, false, false, false, false};
    findAverage(n, pid, bt, pri, at, done);
}