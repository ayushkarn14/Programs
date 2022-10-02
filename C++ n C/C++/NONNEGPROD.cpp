#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int zz = 0; zz < t; zz++)
    {
        int n,num;
        cin >> n;
        bool f = false;
        bool ff = false;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            if (num < 0)
                f = !f;
            if (num == 0)
            {
                ff = true;
            }
        }
        if(ff){
            cout << 0 << endl;
        }
        if (!ff)
        {
            if (f)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
    }

    return 0;
}