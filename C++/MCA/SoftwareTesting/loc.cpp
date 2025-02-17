#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int lc = 0;
    ifstream f("sample.cpp");
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
    cout << "Line of code = " << lc << endl;
}