#include <iostream>
using namespace std;

#define MAX_DIM 50
void matToArr(int mat[][MAX_DIM], int row, int col, int noz)
{
    // int **arr = new int *[noz + 1];
    int arr[noz + 1][3];
    // for (int i = 0; i < noz + 1; i++)
    //     arr[i] = new int[3];

    arr[0][0] = row;
    arr[0][1] = col;
    arr[0][2] = noz;
    int c = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] != 0)
            {
                arr[c][0] = i;
                arr[c][1] = j;
                arr[c][2] = mat[i][j];
                c++;
            }
        }
    }
    cout << "Sparse array:" << endl;
    for (int i = 0; i < noz + 1; i++)
    {
        cout << arr[i][0] << "\t" << arr[i][1] << "\t" << arr[i][2] << endl;
    }
    // return arr;
}
int main()
{
    int row, col;
    cout << "Enter no. of rows: ";
    cin >> row;
    cout << "Enter no. of cols:";
    cin >> col;
    int mat[row][MAX_DIM];
    // int **mat = new int *[row];
    // for (int i = 0; i < row; i++)
    // {
    //     mat[i] = new int[col];
    // }
    cout << "Enter " << row * col << " elements:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << "Input Matrix:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    int noz = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] != 0)
                noz++;
        }
    }
    cout << "Non zero elements = " << noz << " threshold = " << (row * col) / 4.0 << endl;
    if (noz <= (row * col) / 4.0)
        cout << "Can't make a sparse array as its not a sparse matrix";
    else
    {
        matToArr(mat, row, col, noz);
    }
}