#include <bits/stdc++.h>
using namespace std;
class MySet
{
    int *a;
    int n;
    int car=0;
    void input(){
        int ent, p = 0;
        cout << "Enter the number of elements in the array? ";
        cin >> n;
        a = new int[n];
        for(int i=0;i<n;i++){
            cin >> ent;
            p = 0;
            for (int j = 0; j < i; j++)
            {
                if (a[i] == ent)
                    p++;
            }
            if (p == 0){
                a[i] = ent;
                car++;
        cout<<"Cardanality= "<<car;
    }
            }
        }
    int main()
    {
        input();
    }
};