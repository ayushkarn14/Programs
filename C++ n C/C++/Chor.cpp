// C++ program to count number of zeros
// surrounded by 1
#include <iostream>
using namespace std;
int r[4] = { 0, 0, 1, -1 };
int c[4] = { 1, -1, 0, 0 };

bool isSafe(int x, int y, int M[][Coll], int row, int col)
{
	if (x >= 0 && x <= row && y >= 0 &&
		y <= col && M[x][y] == 0)
		return true;
	return false;
}

// DFS function to mark all reachable cells from
// (x, y)
void DFS(int x, int y, int M[][Coll],int Roww,int Coll)
{
	// make it's visited
	M[x][y] = 1;
	for (int k = 0; k < 4; k++)
		if (isSafe(x + r[k], y + c[k], M, Roww, Coll))
			DFS(x + r[k], y + c[k], M);
}

// function return count of 0's which are surrounded by 1
int CountAllZero(int M[][Col],int Row,int Col)
{
	// first we remove all zeros which are not
	// surrounded by 1 that means we only remove
	// those zeros which are reachable from
	// any boundary of given matrix.
	for (int i = 0; i < Col; i++)
		if (M[0][i] == 0)
			DFS(0, i, M,Row,Col);
	for (int i = 0; i < Col; i++)
		if (M[Row - 1][i] == 0)
			DFS(Row - 1, i, M,Row,Col);
	for (int i = 0; i < Row; i++)
		if (M[i][0] == 0)
			DFS(i, 0, M,Row,Col);
	for (int i = 0; i < Row; i++)
		if (M[i][Col - 1] == 0)
			DFS(i, Col - 1, M,Row,Col);

	// count all zeros which are surrounded by 1
	int result = 0;
	for (int i = 0; i < Row; i++)
		for (int j = 0; j < Col; j++)
			if (M[i][j] == 0)
				result++;
	return result;
}

// driver program to test above function
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    }
	cout << CountAllZero(arr) << endl;
	return 0;
}
