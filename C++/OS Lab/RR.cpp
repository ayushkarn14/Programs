#include <iostream>
using namespace std;
class Process
{
public:
    int pid, bt, btt, wt, tt;
    Process(int a = 0, int b = 0)
    {
        bt = b;
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
        p[i].btt = p[i].bt;
    }
    cout << "Enter time quantum :";
    int tq;
    cin >> tq;

    int c = 0, sum = 0;
    for (int i = 0; i < n; i++)
        sum += p[i].bt;
    int i = -1;
    while (c != sum)
    {
        i = (i + 1) % n;
        if (p[i].bt == 0)
            continue;
        c += min(p[i].bt, tq);
        p[i].bt -= min(p[i].bt, tq);

        if (p[i].bt == 0)
        {
            p[i].tt = c;
            p[i].wt = p[i].tt - p[i].btt;
        }
    }
    // displaying
    cout << "Pid\tBT\tTT\tWT\n";
    for (int i = 0; i < n; i++)
    {
        cout << i << "\t" << p[i].btt << "\t" << p[i].tt << "\t" << p[i].wt << "\n";
    }

    return 0;
}