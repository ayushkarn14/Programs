#include <iostream>
using namespace std;
class Process
{
public:
    int pid, at, bt, wt, tt;
    Process(int a = 0, int b = 0)
    {
        bt = b;
        at = -1;
        wt = -1;
        tt = -1;
        pid = -1;
    }
};
int main()
{
    cout << "Enter number of processes: ";
    int n;
    cin >> n;

    Process p[n];
    for (int i = 0; i < n; i++)
    {
        p[i].pid = i;
        cout << "Enter BT of p" << i << " :";
        cin >> p[i].bt;
        cout << "Enter AT of p" << i << " :";
        cin >> p[i].at;
    }

    // Process temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j].at > p[j + 1].at)
            {
                swap(p[j], p[j + 1]);
            }
        }
    }

    int ct = 0, sum = 0, i = 0;
    for (int i = 0; i < n; i++)
        sum += p[i].bt;

    while (ct != sum)
    {
        while (ct >= p[i].at)
        {
            i++;
        }
    }

    p[0].tt = p[0].bt;
    p[0].wt = 0; // as it came first
    for (int i = 1; i < n; i++)
    {
        p[i].tt = p[i - 1].tt + p[i].bt;
        p[i].wt = p[i].tt - p[i].bt;
    }

    cout << "Pid\tBT\tTT\tWT\n";
    for (int i = 0; i < n; i++)
    {
        cout << p[i].pid << "\t" << p[i].bt << "\t" << p[i].tt << "\t" << p[i].wt << "\n";
    }

    return 0;
}