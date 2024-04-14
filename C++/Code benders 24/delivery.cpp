#include <iostream>
#include <vector>
#include <algorithm>

struct Location
{
    int id;
    int x;
    int y;
    int demand;
};

bool compareLocations(const Location &loc1, const Location &loc2)
{
    return loc1.demand > loc2.demand;
}

std::vector<int> calculateOptimalRoute(const std::vector<Location> &locations)
{
    std::vector<int> route;
    std::vector<Location> sortedLocations = locations;
    std::sort(sortedLocations.begin(), sortedLocations.end(), compareLocations);

    for (const Location &loc : sortedLocations)
    {
        route.push_back(loc.id);
    }

    return route;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<Location> locations(n);
    for (int i = 0; i < n; i++)
    {
        int id, x, y, demand;
        std::cin >> id >> x >> y >> demand;
        locations[i] = {id, x, y, demand};
    }

    std::vector<int> optimalRoute = calculateOptimalRoute(locations);

    for (int id : optimalRoute)
    {
        std::cout << id << " ";
    }

    return 0;
}