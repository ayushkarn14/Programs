#include <iostream>
#include <string.h>
using namespace std;
class CRC
{
public:
    CRC()
    {
    }
    string findXOR(string a, string b)
    {
        string result = "";
        if (a[0] == '0')
            return a.substr(1);
        for (int i = 0; i < a.length(); i++)
        {
            result += a[i] == b[i] ? '0' : '1';
        }
        return result.substr(1);
    }
    string divide(string divisor, string dividend)
    {

        string temp_dividend = dividend.substr(0, divisor.length());
        int j = divisor.length();
        while (j < dividend.length())
        {
            temp_dividend = findXOR(temp_dividend, divisor);
            temp_dividend = temp_dividend + dividend[j];
            j++;
        }
        string rem = findXOR(temp_dividend, divisor);
        return rem;
    }
    void sender_side()
    {
        cout << "Enter message : ";
        string msg;
        cin >> msg;
        cout << "Enter key : ";
        string key;
        cin >> key;
        string appended_msg = msg + std::string(key.length() - 1, '0');
        cout << "Encoded message : " << (msg + divide(key, appended_msg));
    }
    void reciever_side()
    {
        cout << "Enter encoded message : ";
        string encoded_msg;
        cin >> encoded_msg;
        cout << "Enter key : ";
        string key;
        cin >> key;
        string rem = divide(key, encoded_msg);
        if (stoi(rem) == 0)
            cout << "No error\n";
        else
            cout << "Error in message\n";
    }
};
int main()
{
    CRC ob;
    // ob.sender_side();
    // ob.reciever_side();
    cout << ob.divide("1101", "100100000");
    return 0;
}