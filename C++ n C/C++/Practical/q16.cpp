#include <bits/stdc++.h>
using namespace std;
int string_length(char* arr)
{
    int l = 0;
    while (*arr != '\0') {
        l++;
        arr++;
    }
  
    return l;
}
int main(){
    cout<<"Enter 1 to show address of each character in string"<<endl;
    cout<<"Enter 2 to concatenate 2 strings without using strcat"<<endl;
    cout<<"Enter 3 to concatenate 2 strings using strcat"<<endl;
    cout<<"Enter 4 to compare 2 strings"<<endl;
    cout<<"Enter 5 to calculate length of string using pointer"<<endl;
    cout<<"Enter 6 to convert lowercase characters to uppercase"<<endl;
    cout<<"Enter 7 to convert uppercase characters to lowercase"<<endl;
    cout<<"Enter 8 to calculate number of vowels"<<endl;
    cout<<"Enter 9 to reverse the string"<<endl;
    string str,str2;
    char arr[100],arr2[100];
    int s;
    cin>>s;
    char ch;
    int c=0;
    switch (s)
    {
    case 1:
        cout<<"Enter a string"<<endl;
        cin>>str;
        for(int i=0;i<str.length();i++){
            cout<<"index of "<<str.at(i)<<" is "<<i<<endl;
        }
        break;
    case 2:
        cout<<"Enter 1st string"<<endl;
        cin>>str;
        cout<<"Enter 2nd string"<<endl;
        cin>>str2;
        str=str+str2;
        cout<<str;
        break;
    case 3:
        cout<<"Enter 1st string"<<endl;
        cin>>arr;
        cout<<"Enter 2nd string"<<endl;
        cin>>arr2;
        strcat(arr,arr2);
        cout<<arr;
        break;
    case 4:
        cout<<"Enter 1st string"<<endl;
        cin>>str;
        cout<<"Enter 2nd string"<<endl;
        cin>>str2;
        if (str2.compare(str) == 0)
            cout<<"Equal";
        else
            cout<<"Unequal";
        break;
    case 5:
        cout<<"Enter a string"<<endl;
        cin>>arr;
        cout<<"Length of string = "<<string_length(arr);
        break;
    case 6:
        cout<<"Enter a string"<<endl;
        cin>>str;
        for(int i=0;i<str.length();i++){
            ch=str.at(i);
            if((int)ch>96 && (int)ch <=122)
                ch-=32;
            str2=str2+ch;
        }
        cout<<str2;
        break;
    case 7:
        cout<<"Enter a string"<<endl;
        cin>>str;
        for(int i=0;i<str.length();i++){
            ch=str.at(i);
            if((int)ch>64 && (int)ch <=90)
                ch+=32;
            str2=str2+ch;
        }
        cout<<str2;
        break;
    case 8:
        cout<<"Enter a string"<<endl;
        cin>>str2;
        for(int i=0;i<str2.length();i++){
            ch=str2.at(i);
            if((int)ch>96 && (int)ch <=122)
                ch-=32;
            str=str+ch;
        }
        for(int i=0;i<str2.length();i++){
            if(str.at(i)=='A' || str.at(i)=='E' || str.at(i)=='I' || str.at(i)=='O' || str.at(i)=='U')
                c++;
        }
        cout<<"Number of vowels = "<<c;
    case 9:
        cout<<"Enter a string"<<endl;
        cin>>str;
        for(int i=0;i<str.length();i++){
            ch=str.at(i);
            str2=ch+str2;
        }
        cout<<str2;
        break;
    default:
        cout<<"Invalid Choice!";
        break;
    }
}