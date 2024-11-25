// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int test_case = 0; test_case < t; test_case++)
//     {
//         int n;
//         cin >> n;
//         vector<int> v;
//         int total = 0;
//         for (int i = 0; i < n; i++)
//         {
//             int inp;
//             cin >> inp;
//             v.push_back(inp);
//         }
//         int c = 0;
//         for (int i = 0; i < n - 2; i++)
//         {
//             if ((v[i] + v[i + 2]) == 4 && v[i + 1] > 2)
//             {
//                 v[i + 1] = 4 - v[i + 1];
//                 c++;
//             }
//         }
//         for (int i = 0; i < n; i++)
//             total += v[i];

//         return total;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int minimizeSum(int N, vector<int> &A)
{
    int remaining1 = 0, remaining3 = 0, sum = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] == 1)
        {
            remaining1++;
        }
        else if (A[i] == 3)
        {
            remaining3++;
        }
        else
        {
            sum += 2;
        }
    }

    int cancel = min(remaining1, remaining3);
    remaining1 -= cancel;
    remaining3 -= cancel;

    sum += remaining1 + remaining3;

    return sum;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << minimizeSum(N, A) << endl;
    }
    return 0;
}
