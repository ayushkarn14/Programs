#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	int op[n];
	int l = 0;
	int r = n - 1;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			op[l] = i;
			l++;
		}
		else
		{
			op[r] = i;
			r--;
		}
	}
	for (int i = 0; i < n; i++)
		cout << op[i] << " ";
}