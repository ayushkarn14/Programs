#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cat /proc/sys/kernel/osrelease");
    system("awk 'NR==5 {print}' /proc/cpuinfo");
}