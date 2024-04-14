#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int kingdomDivision(int n, vector<vector<int>> roads)
{
    map<int, vector<long long>> count;
    map<int, int> deg;
    map<int, vector<int>> e;

    const int TRUE = 1;
    const int FALSE = 0;
    long long MOD = 1E9L + 7L;
    for (int i = 0; i < n; i++)
    {
        e[i] = {};
        deg[i] = 0;
        count[i] = {1, 1};
    }
    for (auto &road : roads)
    {
        int node1 = road[0] - 1;
        int node2 = road[1] - 1;
        e[node1].push_back(node2);
        e[node2].push_back(node1);
        deg[node1]++;
        deg[node2]++;
    }

    int init = 0;
    queue<int> leaves;
    for (int i = 0; i < n; i++)
    {
        if (deg[i] == 1 && i != 0)
        {
            leaves.push(i);
        }
    }
    while (true)
    {
        int y = leaves.front();
        leaves.pop();
        count[y][FALSE] = count[y][TRUE] - count[y][FALSE];
        count[y][FALSE] += MOD;
        count[y][FALSE] %= MOD;

        if (deg[y] == 0)
        {
            init = y;
            break;
        }
        else
        {
            int x = e[y][0];
            e.erase(y);
            e[x].erase(std::find(e[x].begin(), e[x].end(), y));
            deg[x] -= 1;

            if (deg[x] == 1 || deg[x] == 0)
            {
                leaves.push(x);
            }

            count[x][TRUE] *= (count[y][TRUE] + count[y][FALSE]);
            count[x][FALSE] *= (count[y][FALSE]);

            count[x][TRUE] %= MOD;
            count[x][FALSE] %= MOD;
        }
    }
    return (2L * count[init][FALSE]) % MOD;
}

int main()
{
    ifstream file("example2.txt");

    string n_temp;
    getline(file, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<vector<int>> roads(n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        roads[i].resize(2);

        string roads_row_temp_temp;
        getline(file, roads_row_temp_temp);

        vector<string> roads_row_temp = split(rtrim(roads_row_temp_temp));

        for (int j = 0; j < 2; j++)
        {
            int roads_row_item = stoi(roads_row_temp[j]);

            roads[i][j] = roads_row_item;
        }
    }

    file.close();

    int result = kingdomDivision(n, roads);

    std::cout << "result: " << result << std::endl;

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}