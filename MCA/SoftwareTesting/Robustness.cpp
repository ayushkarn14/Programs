#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int pass(int maths, int english)
{
    if (maths < 0 || english < 0 || maths > 100 || english > 100)
        throw "Invalid marks";
    else if (maths >= 40 && english >= 40)
        return true;
    else
        return false;
}
int main()
{
    vector<pair<pair<int, int>, bool>> t;
    vector<int> n{-1, 0, 1, 39, 40, 41, 60, 99, 100, 101};
    for (int i : n)
    {
        for (int j : n)
        {
            if (i >= 40 && i <= 100 && j >= 40 && j <= 100)
            {
                t.push_back({{i, j}, true});
            }
            else
                t.push_back({{i, j}, false});
        }
    }
    cout << "Numeber of test cases: " << t.size() << endl;
    for (auto i : t)
    {
        try
        {
            if (pass(i.first.first, i.first.second) == i.second)
                cout << "Test Passed" << endl;
            else
                cout << "Test Failed" << endl;
        }
        catch (const exception &e)
        {
            cerr << e.what() << '\n';
        }
        catch (const char *e)
        {
            cout << "Test Passed : ";
            cerr << e << '\n';
        }
    }
}