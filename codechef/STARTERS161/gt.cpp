#include <bits/stdc++.h>
using namespace std;

// Function to check if Alice can win
bool solve(int N, vector<int> &A, vector<int> &B)
{
    // Find the largest and second-largest values in A
    int max1 = -1, max2 = -1; // Values
    int max1Index = -1;       // Index of the largest value
    for (int i = 0; i < N; i++)
    {
        if (A[i] > max1)
        {
            max2 = max1;
            max1 = A[i];
            max1Index = i;
        }
        else if (A[i] > max2)
        {
            max2 = A[i];
        }
    }

    // Check for each card if Alice can win
    for (int i = 0; i < N; i++)
    {
        // Alice's maximum value if she picks card i
        int aliceMax = max(A[i], B[i]);

        // Bob's maximum value after Alice removes card i
        int bobMaxA = (i == max1Index) ? max2 : max1;
        int bobMax = max(bobMaxA, B[max1Index]);

        // If Alice can win with this card, return true
        if (aliceMax > bobMax)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < N; i++)
            cin >> B[i];

        if (solve(N, A, B))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
