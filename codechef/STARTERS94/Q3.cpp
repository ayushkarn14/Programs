#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    for (long long test_cases = 0; test_cases < t; test_cases++)
    {
        long long n, b;
        cin >> n >> b;
        vector<int> arr;
        for (long long i = 0; i < n; i++)
        {
            int inp;
            cin >> inp;
            if ((b & inp) == b)
            {
                arr.push_back(inp);
            }
        }
        if (arr.size() == 0)
            cout << "NO";
        else
        {

            long long ans = arr[0];
            for (int i = 1; i < arr.size(); i++)
                ans = ans & arr[i];
            if (ans == b)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
    }
    return 0;
}

// 6 5
// 1 7 3 4 2 13

// 101
// 1x1
// 101

// 111000 <- target
// 111zxy

// 111100 & 111010 & 111111 = 111000  <-- number with 1 at the positions of 1 in target

// x1, x2, x3.....  <-- number with 1 at the positions of 1 in target

//                     at least a number with 1 at the positions of 1 in
//                     target(target &xi = target)

//                         1111100 = 124

//     ~(60) = 000011 & x1 & x2.....check if its == 0