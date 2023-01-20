#include <bits/stdc++.h>
using namespace std;
int main()
{
    float t;
    cin >> t;
    for (float loop_var = 0; loop_var < t; loop_var++)
    {
        float u, V, a, s;
        cin >> u >> V >> a >> s;
        float v;
        if (V * V >= u * u - 2 * a * s)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}