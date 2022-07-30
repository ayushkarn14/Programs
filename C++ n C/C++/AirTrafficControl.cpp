#include <bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
	int pn = 1, result = 1;
	int i = 1, j = 0;
	for (int i = 0; i < n; i++) {
		pn = 1;

		for (int j = i + 1; j < n; j++) {
			if ((arr[i] >= arr[j] && arr[i] <= dep[j]) ||
		(arr[j] >= arr[i] && arr[j] <= dep[i]))
				pn++;
		}
		result = max(result, pn);
	}

	return result;
}

int main()
{
    int nn;
    cin>>nn;
    int arr[nn];
    int dep[nn];
    for(int i=0;i<nn;i++)
        cin>>arr[i];
    for(int i=0;i<nn;i++)
        cin>>dep[i];
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<findPlatform(arr, dep, n);
	return 0;
}
