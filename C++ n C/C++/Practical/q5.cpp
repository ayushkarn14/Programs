#include<iostream>
using namespace std;
bool isPalindrome(string str){
    string r = "";
    for (int i=str.length()-1;i>=0;i--){
        r+= str[i];
    }
    if (str==r){
        return true;
    }
    return false;
}
int main(){
    string s;
    cout<<"Enter your string: ";
    cin>>s;
    if (isPalindrome(s))
    cout<<"The string is palindrome.";
    else
    cout<<"The string is not palindrome.";
    return 0;
}