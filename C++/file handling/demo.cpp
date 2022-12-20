#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream ob;
    ob.open("data.txt");
    cout << "Current contents of file: " << endl;
    string arr;
    getline(ob, arr);
    cout << arr;
    cout << endl;
    cout << "Contents after removing spaces:" << endl;
    int l = arr.length();
    string op = "";
    for (int i = 0; i < l; i++)
    {
        if (arr.at(i) != ' ')
            op += arr.at(i);
    }
    ofstream oob;
    oob.open("op.txt");
    oob << op;
    cout << op;
}