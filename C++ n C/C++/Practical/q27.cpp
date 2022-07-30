#include <iostream>
#include <fstream>
using namespace std;
void writeintofile(string line)
{
    ofstream ofile;
    string finalline = "";
    ofile.open("q27op.txt", ios::app);
    for (char chr : line)
    {
        if (chr !=' ')
        {
            finalline += chr;
        }
    }
    ofile << finalline << endl;
}
int main()
{
    ifstream ifile;
    ifile.open("q27ip.txt", ios::in);
    while (!ifile.eof())
    {
        string line;
        getline(ifile, line);
        writeintofile(line);
    }
    ifile.close();
    return 0;
}