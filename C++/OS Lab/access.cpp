#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
    if (argc < 2)
    {
        cout << "Pass file name as argument" << endl;
    }
    else
    {
        string a = argv[1];
        system(("stat " + a + " | grep File").c_str());
        system(("stat " + a + " | grep Access | awk '{print $1,$2}'").c_str());
        system(("stat " + a + " | grep Size").c_str());
    }
}