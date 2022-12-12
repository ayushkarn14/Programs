#include <bits/stdc++.h>
using namespace std;

bool combinationUtil(int arr[], int half[], int start, int end, int index, int n, int sum);


bool isPossible(int arr[], int n)
{

	if (n%2!=0)
		return false;

	int sum = accumulate(arr, arr + n, 0);
	if (sum%2!=0)
		return false;

	int half[n/2];

	return combinationUtil(arr, half, 0, n - 1, 0, n, sum);
}
bool combinationUtil(int arr[], int half[], int start, int end,
					int index, int n, int sum)
{
	if (index == n / 2) {
		int curr_sum = accumulate(half, half + n / 2, 0);
		return (curr_sum + curr_sum == sum);
	}
	for (int i = start; i <= end && end - i + 1 >= n/2 - index; i++) {
		half[index] = arr[i];
		if (combinationUtil(arr,half,i+1,end, index+1, n, sum))
			return true;
	}
	return false;
}

int main()
{
    int t;
    cin>>t;
    for(int tt=0;tt<t;tt++){
	int nn;
    cin>>nn;
    int arr[nn];
    for(int j=0;j<nn;j++)
        cin>>arr[j];
	int n=sizeof(arr)/sizeof(arr[0]);
	if (isPossible(arr, n))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
    }
    return 0;
}
