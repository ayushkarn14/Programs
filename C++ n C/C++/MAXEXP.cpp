    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        // your code goes here
        int t;
        cin >> t;
        for (int zz = 0; zz < t; zz++)
        {
            int l;
            cin>>l;
            string s;
            cin>>s;
            int plus=0;
            int minus=0;
            vector<int> arr;
            for (int i = 0; i < l; i++)
            {
                if(s.at(i)>='0' && s.at(i)<='9'){
                    arr.push_back(s.at(i)-48);
                }
                if(s.at(i)=='+')
                    plus++;
                else if(s.at(i)=='-')
                    minus++;
            }
            sort(arr.begin(), arr.end(), greater<int>());

            for(int i=0;i<l-2*(plus+minus);i++){
                cout<<arr[i];
            }
            int p=plus;
            int m=minus;
            for(int i=l-2*(plus+minus);i<l-p-m;i++){
                if(plus!=0){
                    cout<<'+';
                    plus--;
                }
                else if(minus!=0){
                    cout<<'-';
                    minus--;
                }
                cout<<arr[i];
            }
            // for (int i = 0; i < arr.size(); i++)
            // {
            //     cout<<arr[i]<<endl;
            // }
            cout<<endl;
        }
    }