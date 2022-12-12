#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void findCounts(int *arr, int n)
{
    //Hashmap
    int hash[n]={0};
 
    // Traverse all array elements
    int i = 0;
    while (i<n)
    {
        //update the frequency of array[i]
        hash[arr[i]-1]++;
         
        //increase the index
        i++;
    }
 
    printf("\nBelow are counts of all elements\n");
    for (int i=0; i<n; i++)
        printf("%d -> %d\n", i+1, hash[i]);
}
 
// Driver program to test above function
int main()
{
    int arr[] = {2, 3, 3, 2, 5};
    findCounts(arr, sizeof(arr)/ sizeof(arr[0]));
int main()
{
    cout>>"Enter the number of elements in an array";
    cin<<int n;
    int arr[n+1];
    cout>>"Enter elements in the array";
    for(int i=0;i<n;i++)
    {
        cin<<arr[i];
    }
    for(int i=0;i<n;i++)
    {
        
    }
}