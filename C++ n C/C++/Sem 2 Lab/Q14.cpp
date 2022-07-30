#include <iostream>
using namespace std;
class Q14
{
public:
	int relA(int);
	int relB(int);
	int relC(int);
};
int Q14::relA(int x)
{
	if (x == 0)
		return 1;
	return (relA(x - 1) + x);
}
int Q14::relB(int x)
{
	if (x == 0)
		return 1;
	return (relB(x - 1) + x * x);
}
int Q14::relC(int x)
{
	if (x == 0)
		return 1;
	return (2 * relC(x / 2) + x);
}
int main()
{
	int c=1, n;
	while (c != 0)
	{
		cout << endl;
		cout << "1. T(n) = T(n-1) + n  ; T(0)=1" << endl;
		cout << "2. T(n) = T(n-1) + n^2  ; T(0)=1" << endl;
		cout << "3. T(n) = 2*T(n/2) +n  ; T(0)=1" << endl;
		cout << "0. End program" << endl;
		cin >> c;

		Q14 ob;
		switch (c)
		{
		case 0:
			break;
		case 1:
			cout << "Enter n: ";
			cin >> n;
			for (int i = 0; i <= n; i++)
			{
				if (i == 0)
					cout << "T(0) = " << ob.relA(i) << endl;
				else
				{
					// cout << "T(" << i << ") = "
					// 	 << "T(" << i - 1 << ") + " << i << " = " << ob.relA(i) << endl;
					cout
						<< i << ", " << ob.relA(i) << endl; // uncomment this line and paste the result in excel to draw the graph
				}
			}
			break;
		case 2:
			cout << "Enter n: ";
			cin >> n;
			for (int i = 0; i <= n; i++)
			{
				if (i == 0)
					cout << "T(0) = " << ob.relB(i) << endl;
				else
				{
					// cout << "T(" << i << ") = "
					// 	 << "T(" << i - 1 << ") + " << i * i << " = " << ob.relB(i) << endl;
					cout
						<< i << ", " << ob.relB(i) << endl; // uncomment this line and paste the result in excel to draw the graph
				}
			}
			break;
		case 3:
			cout << "Enter n: ";
			cin >> n;
			for (int i = 0; i <= n; i++)
			{
				if (i == 0)
					cout << "T(0) = " << ob.relC(i) << endl;
				else
				{
					// cout << "T(" << i << ") = "
					// 	 << "2*T(" << i / 2 << ") + " << i << " = " << ob.relC(i) << endl;
					cout
						<< i << ", " << ob.relC(i) << endl; // uncomment this line and paste the result in excel to draw the graph
				}
			}
			break;
		default:
			cout << "Wrong choice!";
		}
		if (c == 0)
			break;
	}
	return 0;
}
