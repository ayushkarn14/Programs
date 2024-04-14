long maximumPeople(vector<long> p, vector<long> x, vector<long> y, vector<long> r)
{
    set<long> numClouds;
    map<int, long> popCloud;
    vector<pair<long, pair<int, int>>> pos;
    for (int i = 0; i < x.size(); i++)
    {
        pos.push_back({x[i], {0, i}});
    }
    for (int i = 0; i < y.size(); i++)
    {
        pos.push_back({y[i] - r[i], {-i - 1, 0}});
        pos.push_back({y[i] + r[i], {i + 1, 0}});
    }
    sort(pos.begin(), pos.end());

    long res = 0;
    for (int i = 0; i < pos.size(); i++)
    {
        if (pos[i].second.first < 0)
        { // add
            int ind = pos[i].second.first - 1;
            numClouds.insert(ind);
        }
        if (pos[i].second.first > 0)
        { // remove
            int ind = -pos[i].second.first - 1;
            numClouds.erase(ind);
        }
        if (pos[i].second.first == 0)
        { // town in cloud
            int ind = pos[i].second.second;
            if (numClouds.size() == 0)
            {
                res += p[ind];
            }
            else if (numClouds.size() == 1)
            {
                int posCloud = *(numClouds.begin());
                popCloud[posCloud] += p[ind];
            }
        }
    }
    long ans = 0;
    for (auto i : popCloud)
    {
        ans = max(i.second, ans);
    }

    res += ans;
    return res;
}