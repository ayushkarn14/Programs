#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int xy = 0; xy < t; xy++)
    {
        int a[3];
        int ans = 0;
        int nonzero = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            if (a[i] != 0)
                nonzero++;
        }
        bool x = true, y = true, z = true;
        if (nonzero == 0)
            cout << 0 << endl;
        else if (nonzero == 1)
            cout << 1;
        else if (nonzero == 2)
        {
            if (a[1] > 1 && a[2] > 1 || a[0] > 1 && a[2] > 1 || a[1] > 1 && a[0] > 1)
                cout << 3 << endl;
            else
                cout << 2 << endl;
        }
        else
        {
            ans = 3;
            a[0]--;
            a[1]--;
            a[2]--;
            while (nonzero >= 2)
            {
                // cout<<"looped";
                nonzero = 0;
                if (a[0] > 0 && a[1] > 0 && x)
                {
                    ans++;
                    a[0]--;
                    a[1]--;
                    x = false;
                }
                if (a[1] > 0 && a[2] > 0 && y)
                {
                    ans++;
                    a[2]--;
                    a[1]--;
                    y = false;
                }
                if (a[0] > 0 && a[2] > 0 && z)
                {
                    ans++;
                    a[0]--;
                    a[2]--;
                    z = false;
                }
                if (a[0] != 0)
                    nonzero++;
                if (a[1] != 0)
                    nonzero++;
                if (a[2] != 0)
                    nonzero++;
                if ((x == false && y == false && z == false))
                    break;
            }
            if (ans > 3)
                cout << ans << endl;
            else
                cout << 3 << endl;
        }
    }
    return 0;
}