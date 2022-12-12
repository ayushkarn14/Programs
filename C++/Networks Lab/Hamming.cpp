#include <cmath>
#include <iostream>
using namespace std;
bool is_power_of_2(int x)
{
    double n = (double)x;
    while (n > 1)
    {
        n = n / 2;
    }
    if (n == 1.0)
        return true;
    return false;
}
void encode()
{
    // input
    cout << "Enter number of bits in message\n";
    int m;
    cin >> m;
    int msg[m];
    cout << "Enter message\n";
    for (int i = 0; i < m; i++)
        cin >> msg[i];
    // finding number of parity bits
    int r = 0;
    while (pow(2, r) < r + m + 1)
    {
        r++;
    }
    int code[m + r];

    // encoding
    int parity = 0;
    int p = m - 1; // index of msg...initially length of msg-1

    for (int i = m + r - 1; i >= 0; i--)
    { // inserting msg bits
        int j = m + r - i;
        if (!is_power_of_2(j))
        {
            code[i] = msg[p--];
        }
        else
            code[i] = 0;
    }

    for (int i = m + r - 1; i >= 0; i--)
    { // inserting parity bits
        int j = m + r - i;

        // 1 1 0 1 0 1 0 0

        if (is_power_of_2(j))
        {
            int count = 0; // for storing sum of bits;
            for (int k = i; k >= 0; k = k - j * 2)
            { // loop for picking and skiping
                for (int l = k; l > k - j; l--)
                {
                    if (code[l] == 1)
                        count++;
                }
                // 1 1 0 1 1 0 1
            }
            if (count % 2 == 1)
                parity = 1;
            else
                parity = 0;
            code[i] = parity;
            // cout<<code[i]<<endl ;
        }
    }
    cout << "Coded msg: \n";
    for (int i = 0; i < m + r; i++)
    { // displaying coded msg
        cout << code[i] << " ";
    }
}
void decode()
{
    cout << "Enter number of bits in encoded msg :";
    int n;
    cin >> n;
    int enc[n];
    int enc_copy[n];
    cout << "Enter the coded msg\n";
    for (int i = n - 1; i >= 0; i--)
    {
        cin >> enc[i];
        enc_copy[i] = enc[i];
    }
    string bin = "";
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (is_power_of_2(i + 1))
        {
            // cout << 1 + i << endl;
            c = 0;
            for (int j = i; j < n; j += ((i + 1) * 2))
            {
                for (int k = j; k < j + i + 1; k++)
                {
                    if (enc[k] == 1)
                    {
                        c += enc[k];
                        // cout << "P bit " << i + 1 << " at pos " << k << endl;
                    }
                }
            }
            if (c % 2 == 0)
            {
                bin = '0' + bin;
            }
            else
            {
                bin = '1' + bin;
            }
        }
    }
    // cout << bin;
    int pos = stoi(bin, nullptr, 2);
    if (pos != 0)
    {
        cout << "Error was at position " << pos << endl;
        if (enc_copy[pos - 1] == 0)
            enc_copy[pos - 1] = 1;
        else
            enc_copy[pos - 1] = 0;
    }
    else
        cout << "No error in encoded msg\n";
    cout << "Decoded msg:\n";
    for (int i = n - 1; i >= 0; i--)
    {
        if (!is_power_of_2(i + 1))
            cout << enc_copy[i];
    }
}
int main()
{
    cout << "==========ENCODER============\n";
    encode();
    cout << "==========DECODER============\n";
    decode();
}