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
    vector<pair<pair<int, int>, bool>> t{
        {{40, 0}, false}, {{40, 1}, false}, {{40, 39}, false}, {{40, 40}, true}, {{40, 41}, true}, {{40, 60}, true}, {{40, 99}, true}, {{40, 100}, true}, {{41, 0}, false}, {{41, 1}, false}, {{41, 39}, false}, {{41, 40}, true}, {{41, 41}, true}, {{41, 60}, true}, {{41, 99}, true}, {{41, 100}, true}, {{60, 0}, false}, {{60, 1}, false}, {{60, 39}, false}, {{60, 40}, true}, {{60, 41}, true}, {{60, 60}, true}, {{60, 99}, true}, {{60, 100}, true}, {{99, 0}, false}, {{99, 1}, false}, {{99, 39}, false}, {{99, 40}, true}, {{99, 41}, true}, {{99, 60}, true}, {{99, 99}, true}, {{99, 100}, true}, {{100, 0}, false}, {{100, 1}, false}, {{100, 39}, false}, {{100, 40}, true}, {{100, 41}, true}, {{100, 60}, true}, {{100, 99}, true}, {{100, 100}, true}, {{0, 0}, false}, {{0, 1}, false}, {{0, 39}, false}, {{0, 40}, false}, {{0, 41}, false}, {{0, 60}, false}, {{0, 99}, false}, {{0, 100}, false}, {{1, 0}, false}, {{1, 1}, false}, {{1, 39}, false}, {{1, 40}, false}, {{1, 41}, false}, {{1, 60}, false}, {{1, 99}, false}, {{1, 100}, false}, {{39, 0}, false}, {{39, 1}, false}, {{39, 39}, false}, {{39, 40}, false}, {{39, 41}, false}, {{39, 60}, false}, {{39, 99}, false}, {{39, 100}, false}};
    cout << "Number of test cases: " << t.size() << endl;
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
    }
}