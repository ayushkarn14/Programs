#include <bits/stdc++.h>
using namespace std;
int check(string s1, string s2)
{
	int M = s1.length();
	int N = s2.length();
	for (int i = 0; i <= N - M; i++) {
		int j;
		for (j = 0; j < M; j++)
			if (s2[i + j] != s1[j])
				break;
		if (j == M)
			return i;
	}
	return -1;
}
int main()
{
	string s1,s2;
    cin>>s2>>s1;
	int res = check(s1, s2);
	if (res == -1)
		cout <<-1;
	else
		cout <<res;
	return 0;
}
