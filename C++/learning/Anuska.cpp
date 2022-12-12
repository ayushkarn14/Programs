#include <iostream>
using namespace std;
class ques16_
{
    int **adm, ad_size;
    int i, j;

public:
    void input()
    {
        cout << "enter the number of vertices" << endl;
        cin >> ad_size;
        adm = new int *[ad_size];
        for (i = 0; i < ad_size; i++)
        {
            adm[i] = new int[ad_size];
        }
        cout << "enter the data for adjancency matrix" << endl;
        for (i = 0; i < ad_size; i++)
        {
            for (j = 0; j < ad_size; j++)
            {
                cout << "enter the no. of edges from " << (char)(i + 65) << " to " << (char)(j + 65) << endl;
                cin >> adm[i][j];
            }
        }
    }

public:
    void print()
    {
        for (int i = 0; i < ad_size; i++)
        {
            for (j = 0; j < ad_size; j++)
            {
                cout << adm[i][j];
            }
            cout << endl;
        }
    }
};
int main()
{
    ques16_ ob;
    ob.input();
    ob.print();
    return 0;
}