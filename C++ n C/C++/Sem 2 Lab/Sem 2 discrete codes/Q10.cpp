//incomplete
#include <iostream>
using namespace std;
class Q10
{
public:
    char *ch;
    char *data;
    void permute_no_rep(char*, int, int);
    void permute_rep(char*,char*, int, int);
    void start();
};
void Q10::start(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int size = str.size();
    ch=new char[size];
    data=new char[size];
    for(int i=0;i<size;i++)
        ch[i]=str[i];
    cout << "All permutations: " << endl;
    cout<<"1. Without repetition; 2. With repetition";
    int c;
    cin>>c;
    switch(c){
        case 1:
            permute_no_rep(ch, 0, size - 1);
            break;
        case 2:
            permute_rep(ch,data, size - 1,0);
            break;
        default:
            cout<<"Wrong choice";
    }
}
void Q10::permute_no_rep(char* a, int l, int r)
{
    if (l == r)
        cout << a << endl;
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute_no_rep(a, l + 1, r);
            swap(a[l], a[i]);
        }
    }
}
void Q10::permute_rep(char* a, char *data, int r, int index)
{
        for(int i=0; i<=r; i++)
        {  
                data[index] = a[i];
                if(index == r)
                {
                        for(int j=0; j<index+1; j++)
                            cout << data[j];
                        cout<<endl;
                }
                else
                {
                        permute_rep(a,data, r, index+1);
                }
        }
}

int main()
{
    Q10 ob;
    ob.start();
}