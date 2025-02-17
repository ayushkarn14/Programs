#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
float getkloc(string name)
{
    int lc = 0;
    ifstream f(name);
    if (f.is_open())
    {
        string line;

        bool multiComment = false;
        while (getline(f, line))
        {
            bool singleComment = false;
            // cout << line << " a line\n";
            for (int i = 0; i < line.length(); i++)
            {
                if (line[i] == ' ')
                    continue;
                else if (i != line.length() - 1 && line[i] == '/' && line[i + 1] == '/')
                    singleComment = true;
                else if (i != line.length() - 1 && line[i] == '/' && line[i + 1] == '*')
                    multiComment = true;
                else if (multiComment && i != 0 - 1 && line[i - 1] == '*' && line[i] == '/')
                    multiComment = false;
                else if (!singleComment && !multiComment)
                {
                    lc++;
                    // cout << lc << "--" << line << endl;
                    break;
                }
            }
        }
        f.close();
    }
    return (float)lc / 1000;
}
int main()
{
    float consts[3][4] = {{2.4, 1.05, 2.5, 0.38},
                          {3.0, 1.12, 2.5, 0.35},
                          {3.6, 1.20, 2.5, 0.32}};
    cout << "Enter name of file : ";
    string n;
    cin >> n;
    float kloc = getkloc(n);
    int type;
    if (kloc <= 50)
        type = 0;
    else if (kloc <= 300)
        type = 1;
    else
        type = 2;

    float effort = consts[type][0] * pow(kloc, consts[type][1]);
    float devT = consts[type][2] * pow(effort, consts[type][3]);

    cout << "KLOC = " << kloc << endl;
    cout << "Effort = " << effort << endl;
    cout << "TIme to develop = " << devT << endl;
}