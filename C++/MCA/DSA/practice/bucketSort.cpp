#include <iostream>
#include <cmath>
using namespace std;
struct Node
{
    int val;
    Node *next;
};
Node *createNode(int x)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->val = x;
    temp->next = NULL;
    return temp;
}
void bucketSort(int arr[], int n)
{
    int maxi = 0;
    int mini = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxi < arr[i])
            maxi = arr[i];
        if (mini > arr[i])
            mini = arr[i];
    }
    int range = maxi - mini;                                      // 10-90
    int numBuckets = (int)ceil(sqrt(n));                          // 10
    int bucketSize = (int)ceil((float)range / (float)numBuckets); // 9

    Node *buckets[numBuckets];
    for (int i = 0; i < numBuckets; i++)
        buckets[i] = NULL;

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        Node *curr = createNode(num);

        int bucketInd = (num - mini) / bucketSize;

        // insert num in buckets[bucketInd] in sorted order
        if (buckets[bucketInd] == NULL)
            buckets[bucketInd] = curr;
        else
        {
            Node *head = buckets[bucketInd];
            Node *tp = NULL;
            Node *t = head;
            while (t != NULL && t->val < num)
            {
                tp = t;
                t = t->next;
            }
            if (tp == NULL)
            {
                buckets[bucketInd] = curr;
                curr->next = head;
            }
            else
            {
                tp->next = curr;
                curr->next = t;
            }
        }
    }

    // displaying sorted elements
    for (int i = 0; i < numBuckets; i++)
    {
        Node *t = buckets[i];
        while (t != NULL)
        {
            cout << t->val << " ";
            t = t->next;
        }
    }
}
int main()
{
    cout << "Enter number of elements : ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bucketSort(arr, n);
}