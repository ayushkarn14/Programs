#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    system("awk 'NR==1, NR==3 {print}' /proc/meminfo");
    
}